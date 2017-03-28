.model small
.stack 100h
.data
msg1 db 'Enter 1st Value: $'
msg2 db 'Enter 2nd Value: $'
msg3 db 'Sum is: $'   
msg4 db 'Sub is: $'
i db ?
j db ?
r1 db ?
r2 db ?
.code
main proc
    mov ax,@data
    mov ds,ax
    
    lea dx,msg1
    mov ah,9
    int 21h
    
    mov ah,1
    int 21h
    mov i,al
    
    mov ah,2
    mov dl,0dh
    int 21h
    mov dl,0ah
    int 21h 
    
    lea dx,msg2
    mov ah,9
    int 21h
    
    mov ah,1
    int 21h
    mov j,al 
    
    mov dl,i
    add dl,j
    sub dl,30h
    mov r1,dl
    
    mov dl,i
    sub dl,j
    add dl,30h
    mov r2,dl
    
    mov ah,2
    mov dl,0dh
    int 21h
    mov dl,0ah
    int 21h
     
    lea dx,msg3
    mov ah,9
    int 21h
    
    mov ah,2
    mov dl,r1
    int 21h
    
    mov ah,2
    mov dl,0dh
    int 21h
    mov dl,0ah
    int 21h
    
    lea dx,msg4
    mov ah,9
    int 21h
    
    mov ah,2
    mov dl,r2
    int 21h
    
    main endp
end main
    