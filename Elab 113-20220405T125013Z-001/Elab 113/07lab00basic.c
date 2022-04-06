#include <stdio.h>

//ข้อ 1 ผ่อนคลาย arithmetic
int main(){
    //จงตอบค่าของตัวแปรที่กำหนด
    int a=4, b=3, c, d, e;
    float f=2,g=5, h, i, j, k;

    c = f/b*f;
    //c = 1             
    h = a++/(float)b;
    // h = 1.33
    // ### a=5
    j = (float)c/h--;    
    // j = 0.75
    // ### h=0.33
    d = b*h/c;
    //d = 1          
    i = d*f+h--;
    //i = 2.33
    //### h=-0.67            
    e = a*d++/i;     
    // e = 2
    // ### d=2        
    k = (int)i*d/(float)a;     
    // k = 0.80   


    /*ทุกคำสั่งมีความต่อเนื่องกัน         
                                             **Answer**  
    c = "1";
    h = "1.33";
    j = "0.75";
    d = "1";
    i = "2.33";
    e = "2";
    k = "0.80";    
    */

}

//ข้อ 2 ผ่อนคลาย bitwise
int main(){
    // int a=5, b=2;

    // 1. a++%b>>2        /* Ans1 = 0 */
    // 2. a|b+3           /* Ans2 = 5 */
    // 3. (b<<1)*a        /* Ans3 = 20 */
    // 4. a+(7&b)         /* Ans4 = 7 */
    // 5. --a*b%3<<2      /* Ans5 = 8 */
    // 6. (a+5*b>>1)<<2   /* Ans6 = 28 */
}

//ข้อ 3 ผ่อนคลาย logical
int main(){
    int x=1, y=0, z=32;
    float i=65;
    char a='A', b='a';

    // 1. (b==a+z)&&(x>y)        /*Ans1 = T */
    // 2. (y==z)&&(!y)           /*Ans2 = F */
    // 3. (a/4==i/4)||(!z)       /*Ans3 = F */
    // 4. (z>=y)&&(a!=65)        /*Ans4 = F */
    // 5. (x*y)||(x)&&(z%5)      /*Ans5 = T */
    // 6. (b<i)||(z/2)           /*Ans6 = T */
}

//ข้อ 4 ผ่อนคลาย pointer and array
int main(){
    int a[10] = {0, 1}, *ptr;
    int  k;
    ptr  =  a+2;
    for(k=2; k<10; k++)
    a[k] = a[k-1]+a[k-2];

    /* สมมติให้ตำแหน่งหน่วยความจำที่เก็บตัวแปร a คือ FFE0 จงเติมค่าที่เก็บในตัวแปรต่อไปนี้

    *ptr = 1

    *(ptr+1) = 2

    ptr = FFE8

    ptr[3] = 5

    ptr[-1] = 1

    &a[4] = FFF0

    *(ptr+2) = 3

    ptr+3 = FFF4

    &ptr[3] = FFF4

    ptr[5] = 13 */
}

//ข้อ 5 ผ่อนคลาย address & dereferencing
int main(){
    int i, j=12;
    int *pi, *pj=&j;
    *pj = j+3;
    i = *pj+7;
    pi = pj;
    *pi = i+j;

    /*สมมติให้ตำแหน่งหน่วยความจำที่เก็บตัวแปร i คือ FF04 และตัวแปร j คือ FF00 จงเติมค่าของตัวแปรหรือนิพจน์ต่อไปนี้
    &i = FF04

    &j = FF00

    pj = FF00 

    *pj = 37

    i = 22

    pi = FF00 

    *pi = 37

    pi+2 = FF08

    *pi+2 = 39

    *pi+*pj = 74     */
}

//ข้อ 6 ผ่อนคลาย address & dereferencing
int main(){
    /* ให้แก้ไขการจองพื้นที่
    กำหนด int *A, *B;

    เขียนประโยคคำสั่งเพื่อทำการจองพื้นที่หน่วยความจำ ที่ทำการเก็บตัวแปรชนิด int ขนาด 20 integers โดยหน่วยความจำดังกล่าวถูกชี้โดย pointer A

    เขียนประโยคคำสั่งเพื่อทำการจองพื้นที่หน่วยความจำ ที่ทำการเก็บตัวแปรชนิด int ขนาด 40 byte โดยกำหนดให้ค่าเป็น 0 ของหน่วยความจำที่ชี้โดย pointer B

    ให้ทำการลดพื้นที่การจองในข้อ 1 เป็น 10 intergers

    ให้ทำการเพิ่มพื้นที่การจองในข้อ 2 เป็น 15 intergers

    หมายเหตุ
    ให้เขียนประโยคคำสั่งลงในเครื่องหมายคำพูดโดยไม่ต้องเว้นช่องว่าง */

    // Ans1  = "A=(int*)malloc(20*sizeof(int))";
    // Ans2  = "B=(int*)calloc(10,sizeof(int))";
    // Ans3  = "A=(int*)realloc(A,10*sizeof(int))";
    // Ans4  = "B=(int*)realloc(B,15*sizeof(int))";
}

//ข้อ 7 ผ่อนคลาย Free
ืint main(){
    /* ให้คืนตำแหน่งหน่วยความจำของโปรแกรม (ที่ได้ให้ pointer ใช้งานเสร็จแล้ว) กลับสู่ระบบ โดยกำหนดการใช้งานหน่วยความจำดังนี้ */

    float **ptr;
    int i,m,n;
    ptr=(float**)malloc(m*sizeof(float*));
    for(i=0;i<m;i++)
        ptr[i]=(float*)malloc(n*sizeof(float));
    /* Do something with ptr */

    // for(i=0;i<m;i++)
    // free(ptr[i]);
    // free(ptr);
}