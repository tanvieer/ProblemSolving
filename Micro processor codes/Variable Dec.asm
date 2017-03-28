.model small
.stack 100h   
.data
msg1 db 'Enter Value: $'   
msg2 db 'Value is: $'  

i db 5  ; variable with value declearation
j db ?  ; variable without value declearation

.code

main proc  
    
    mov ax,@data          ; .data er jonno ei dui line lekha lage
    mov ds,ax

   ; MOV AH,2
   ; MOV DL, '?'
   ; INT 21h    
   
   
    lea dx,msg1
    MOV AH,9              ; msg dsply kora function er jonno 9
    INT 21h

    mov ah, 1             ; 1 is for input
    INT 21h 
    mov j,al


    MOV AH,2
    MOV DL,0DH            ; new line
    INT 21h
    MOV DL, 0AH           ; carry
    INT 21h 
    
    lea dx,msg2
    MOV AH,9              ; msg dsply kora function er jonno 9
    INT 21h   
    
             
    MOV AH,2         
    MOV dl,j
    INT 21h 
    
    ;MOV AH,2
   ; MOV DL,0DH            ; new line
   ; INT 21h
   ; MOV DL, 0AH           ; carry
   ; INT 21h   
    
   ; add i,30h
    
   ; mov ah,2
   ; mov dl,i
   ; int 21h
    
    mov ah,4ch
    int 21h
    
    main endp
end main
