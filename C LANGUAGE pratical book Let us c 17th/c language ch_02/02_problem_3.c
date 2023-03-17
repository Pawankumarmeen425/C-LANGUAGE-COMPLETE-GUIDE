

#include<stdio.h>

int main (){
    int amount, hun_note,fifty_note,ten_note,five_note,two_note,one_note, total;
    printf("Enter the amount(sum of rupees)\n");
    scanf("%d" ,&amount);

    hun_note=amount/100;
    amount=amount%100;
    fifty_note=amount/50;
    amount=amount%50;
    ten_note=amount/10;
    amount=amount%10;
    five_note=amount/5;
    amount=amount%5;
    two_note=amount/2;
    amount=amount%2;
    one_note=amount/1;
    amount=amount%1;
    // total numbers of notes
    total=hun_note+fifty_note+ten_note+five_note+two_note+one_note;
    printf("Smallest numbers of notes = %d\n",total);
return 0;
}