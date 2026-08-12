#include <stdio.h>

int main(){
    int sections = 5;  //กำหนดชั้น
    int baseHight = 5;  //กำหนดความสูงเริ่มต้น
    int a , b , c ;   //ตัวแปร

    for (a=0 ; a < sections; a++) {
        int hight = baseHight + a;  //ความสูงแต่ละชั้น

        for(b=0 ; b < hight; b++){
            for (c = 0; c < (sections + baseHight + sections -b -a); c++){
            printf(" ");  //ช่องว่างจะคำนวณให้อยู่กึ่งกลาง
        }
        for(c=0 ; c < 2 * b + 1 + 2 * a; c++){  //2 * b + 1: ความกว้างพื้นฐานของสามเหลี่ยม + 2 * a: เพิ่มความกว้างเมื่อชั้นล่างลง
            printf("*");
        }
        printf("\n");
    }

}

    int woodhight = 5;  //ความสูงลำต้น
    int woodwidth = 5;  //ความกว่างลำต้น
    int totalwidth = 2 * (baseHight + sections + baseHight -1) +1 ; //คำนวณความกว้างของต้นไม้ทั้งหมด เพื่อใช้จัดตำแหน่งลำต้นให้อยู่ตรงกลาง

    for( a = 0; a < woodhight; a++){
        for ( b = 0; b < ( totalwidth - woodwidth) / 2; b++ ) {
            printf(" "); //ลูปสำหรับวาดลำต้นในแนวตั้ง พิมพ์ช่องว่างก่อนพิมพ์ลำต้น เพื่อจัดให้อยู่ตรงกลาง
        }
        for ( b = 0; b < woodwidth; b++){
            printf("|"); //พิมพ์ | เพื่อแทนลำต้นในแนวนอน
        }
        printf("\n");
    } //เริ่มบรรทัดใหม่จนกว่าเงื่อนไขจะเป็นเท็จ

    return 0;
}