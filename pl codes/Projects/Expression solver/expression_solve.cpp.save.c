/*------------------------------------------------
 *------------------------------------------------
 * |id     		:   112 0821 042
 * |name   		:   Alim Ul Karim
 * |email  		:   alim.karim.nsu@gmail.com
 * |course 		:   CSE 115.2
 * |blog   		:   http://bit.ly/auk-blog
 * |linkedin   	:   http://linkd.in/alim-ul-karim
 * |cell   		:   +880-1673-175222
 * |cell   		:   +880-1913-500863
 *------------------------------------------------
 *------------------------------------------------
 */

//Below functions are related to solve expressions , written by Alim Ul Karim

void solve_full_expressions_using_brackets(char s[]){

    startover:
    int i ,r, count = getLen(s) , missing_index = -1;
    char token;
    int con1,con2,con3,con4;
    char part[N] = "";


    int open_braket_index = -1 , close_braket_index = -1;
    for (i = 0; i <  count ; i++ )
    {
        inside_first_braket:
        token = s[i];
        if(token == ')') { missing_index = i+1 ; goto no_brakets;}

        if(token == '('){
            //first bracket present then look for second braket
            open_braket_index = i;
            missing_index = i + 1;
            for (r = i+1; r <  count ; r++ )
            {

                token = s[r];
                if(token == '('){
                    //if inside a first braket , we found another first braket , it means it has nested expressions inside a braket.
                    i = r;
                    goto inside_first_braket;
                }
                if(token == ')'){
                    close_braket_index = r;
                    goto got_bracktes;
                }


            }
        }

    }

    if(missing_index> -1) goto no_brakets;

    got_bracktes:

    //printf("\nf:%d l:%d\n" , open_braket_index , close_braket_index);
    //index was tested and it was correct:
    //Experiments
    string_copy(part , s , open_braket_index + 1 , close_braket_index);
   // printf("\npart :: |%s|\n" , part);
    con1 = !verify_number(part);
    con2 = ( search(part,'(') == -1 );
    con3 = ( search(part,')') == -1 );
    con4 = verify_number(part);
    //printf("con1:%d , con2:%d , con3:%d con4:%d\n" , con1, con2 , con3 , con4);
    if (con4) {
        substring_replace(s , part , open_braket_index, close_braket_index);
        clean_up_plus_minus(s);
        print_equation_in_a_decent_format(s , 0 , 1 , 0); printf("\n");
        //printf("full exp :: |%s|\n" , s);
    } else if(con1 && con2 && con3){
        //then it means , part is a expression not a valid number , where no bracket exist
        solve_a_non_bracket_full_expression(part, 0); //solving the bracket portion
        if(part[0] != '-')
        substring_replace(s , part , open_braket_index, close_braket_index);
        clean_up_plus_minus(s);
        print_equation_in_a_decent_format(s , 0 , 1 , 0); printf("\n");
        //printf("full exp :: |%s|\n" , s);
    } else {
        goto common_error;
    }

    con2 = ( search(s,'(') > -1 );
    con3 = ( search(s,')') > -1 );
    if(con2 || con3){
        //it means , expression has one or many brackets yet
        goto startover;
    } else {
        //it is a simplified version , so it could be a number or a simple expression without any brackets
        if(!verify_number(s)){
            //if it is already a number then do not need to print it again
            //esle solve it and print it
            solve_a_non_bracket_full_expression(s,1);
        }
    }




    return;
    common_error:
    printf("\n");
    indent;
    printf("Sorry , your expression has a syntax error, please check and try again." , missing_index);

    return;
    no_brakets:
    printf("\n");
    indent;
    printf("Sorry , your expression has a missing bracket at %d, so we can not solve your expresson." , missing_index);
}


void solve_a_non_bracket_full_expression(char s[] , int pint_expression = 0){


    int i , count = getLen(operators_duplicate_not_allowed);
    for (i = 0; i <  count ; i++ )
    {
        char token = operators_duplicate_not_allowed[i];
        //printf("Input Value For:%c\n" , token);
        if(search(s,token,0,-1) > -1){
            recursive_simplifier_token(s, token);
            int len        = getLen(s);
            //if last char has minus , then solve it
            char last_char = s[len-1];
            int result = search_is_operator_in_duplicateNA(last_char);

            if( result > -1 && last_char !='!' ){
                removeChar_method(s, len-1);
            }

            if(pint_expression) {
                print_equation_in_a_decent_format(s , 0 , 1 , 0); printf("\n");
            }
        }
    }

}

void recursive_simplifier_token(char s[] ,char token){
//    int i = 0;
    recursive:
    int r = process_simple_token(s,token);
    if(r == 1){

        //for testing only
//        i++;
//        if(i > 10) return;
        //so maybe still same token exist
        goto recursive;


    }

}


int process_simple_token(char s[], char token) {
    int i= 0 , count = getLen(s);
    int left_index , right_index; // contain the index only
    char right_number[N] , left_number[N] ; //contain the numbers
    int number_len = 0 ;
    //struct equation_propertise ep[EquationPropertiseN] , epx;
    int routing = 0; // for generating left and right number
    int is_number = 1 , result;
    char temp , tempToken;


    for (i = 0 ; i < count ; i++ ) {
        /* we are moving from  left to right, if we find the token which matches the requirements
           then we will find the right and left number and the verify it and then send it to process
           to its respective function and then replace it in the middle of the equation.
         */
        //consequently a equation of 1+ 3 + 42 + 133 will be
        //if(i == (count)) return;
        char c = s[i];
        if(token == '-' && i == 0) continue;
        //printf("%c" , c);
        if(c == token) {
            //we have found the token , now we need to find the left and the right number
            int token_pos = i;

            //Left Number Getting Operation
            left_index = token_pos - 1;
            routing = left_index;
            //printf("::routing:%d\n" , routing );
            is_number = 1;
            int minus_found_left = 0 , minus_found_right = 0;
            while(is_number) {
                /* checking, if we ran into any token other than minus */
                temp   = s[routing];
                result = search_is_operator_in_duplicateNA(temp);

                int condition_1 = (result > -1 && operators_duplicate_not_allowed[result] != '-');
                int condition_2 = (result > -1 && operators_duplicate_not_allowed[result] == '-' && minus_found_left >= 1);
                if( temp == '-' ) minus_found_left = 1; //if minus found in any place that means count +1
                if(condition_1 || condition_2) {
                    //break
                    break;
                }
                //Now getting the substring to the left number
                substring(s , routing-- , left_index , left_number);
                //printf("LeftN:%s,routing:%d\n" , left_number , routing + 1);
                //printf("routing:%d\n" , routing + 1);
                number_len = getLen(left_number);
                int first_char_minus_condition = (number_len==1 && right_number[0] != '-');
                if(number_len > 0 && first_char_minus_condition) {
                    is_number = verify_number(left_number);
                }
                if (routing <= -1 || minus_found_left >= 1) break;
            }
            left_index = routing + 1;

            is_number = verify_number(left_number);
            //printf("is number:%d,number:|%s|\n" , is_number , left_number);
            if (!is_number) {
                removeChar_method(left_number , 0); //if not valid then the first index contains garbage
                left_index++;
            }
           // printf("Left:%s\n" , left_number);

            //printf("routing: %d , routing char:%c , token:%d\n" , routing , s[i] , token_pos);

            //Right Number Getting Operation
            is_number = 1;
            right_index = token_pos + 1;
            routing = right_index;
            //getting right number , becase we are moving from left to right
            while(is_number) {
                /* checking, if we ran into any token other than minus */
                temp   = s[routing];
                result = search_is_operator_in_duplicateNA(temp);
                if(temp== '-' && routing == right_index){
                    routing++;
                    continue;
                }
                int condition_1 = (result > -1);
                int condition_2 = (result > -1 && operators_duplicate_not_allowed[result] == '-' && minus_found_right >= 1);
                if( temp == '-' ) minus_found_right += 1;
                if(condition_1) {
                    break;
                }
                //Now getting the substring to the left number
                substring(s , right_index , routing++ , right_number);
                //printf("rightN:%s\n" , right_number);
                number_len = getLen(right_number);
                int first_char_minus_condition = (number_len==1 && right_number[0] != '-');
                if(number_len > 0 && first_char_minus_condition) {
                    is_number = verify_number(right_number);
                }
                if(minus_found_right >= 1) break;
                if(temp == '\0'){
                    --routing;
                    break;
                }
            }
            //            // //if not valid then the last index contains garbage
            //printf("Right:%s , count:%d\n" , right_number , getLen(right_number));
            right_index = routing - 1;

            is_number = verify_number(right_number);
            if (!is_number) {
                right_number[right_index-1] = '\0';
                right_index--;
            }

            process_small_equation(s , left_number,right_number ,left_index ,right_index, token);
            return 1;

        }
        //if(i < count && change > 0) process_simple_token(s, token , i);

    }

    return 0;
}
