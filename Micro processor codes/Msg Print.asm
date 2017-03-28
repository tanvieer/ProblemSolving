.model small
.stack 100h   
.data
msg1 db 'Enter Value: $'   
msg2 db 'Value is: $'

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

    mov ah, 1
    INT 21h

    MOV BL, AL

    MOV AH,2
    MOV DL,0DH            ; new line
    INT 21h
    MOV DL, 0AH           ; carry
    INT 21h 
    
    lea dx,msg2
    MOV AH,9              ; msg dsply kora function er jonno 9
    INT 21h
             
    MOV AH,2         
    MOV DL,BL
    INT 21h
    
    main endp
end main
