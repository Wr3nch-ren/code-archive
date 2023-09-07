TITLE   Chinapat Fongon
SUBTITLE    6410406541
STACK   SEGMENT STACK
        DW      64 DUP(?)
STACK   ENDS

DATA    SEGMENT
NUM     DB      10,25
SUM     DB      ?
DATA    ENDS

CODE    SEGMENT
        ASSUME  CS:CODE, DS:DATA, SS:STACK
FIRST   PROC
        MOV     AX,DATA
        MOV     DS,AX
        MOV     AL,NUM
        MOV     BL,NUM+1
        ADD     AL,BL
        MOV     SUM,AL
        MOV     AH,4CH
        INT     21H
FIRST   ENDP
CODE    ENDS
        END     FIRST