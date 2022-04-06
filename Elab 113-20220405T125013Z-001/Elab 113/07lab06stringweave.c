/* ถักอักขระ (1)
ฟังก์ชัน int charcount(char *s) 
นับจำนวนอักขระที่ปรากฏอยู่ในสายอักษรที่ส่งผ่านเข้ามาในฟังก์ชันตั้งแต่อักขระตัวแรกจนถึง
อักขระตัวสุดท้ายก่อนหน้าอักขระนัลล์ (null character)

ฟังก์ชัน void charweave(char *s,char *result) 
จะถักอักขระโดยเก็บผลลัพธ์ของการถักนี้ไว้ในตัวแปร result  */
#include <stdio.h>


int charcount(char *s){
    int count = 0;
    while (s[count] != '\0'){
        count++;
    }
    return count;

}

void charweave(char *s,char *result){
    int len = charcount(s);
    int length = len, j = 0;

    for(int i = 0; i < len * 2; i++){
        result[j] = s[i];
        j++;
        result[j] = s[length -1];
        j++;  
        length--;
    }
    result[len*2] = '\0';
}


main()
{  char str[100],result[200];

   printf("String: ");
   gets(str);   /* read a line of characters from the input to "str" variable */
   charweave(str,result);
   printf("Output: %s\n",result);
   return 0;
}