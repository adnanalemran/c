
#include <stdio.h>
#include <conio.h>
struct about
{
    char name[50];
    char adrs[100];
};
prtline();


void main()
{
    struct about s[10];

    int i = 1, num, a, b, n, y, price, gst = 0, total = 0,quant=0;
    char ch[50];
    //clrscr();

   // textcolor(YELLOW);
    printf("\n                        ____________ Menu Card  _________________\n\n");

    printf("\n                       1) All Cold-drinks (200ml)  - 25rs\n                2) Pizza        - 200rs        9) Burger       - 100rs\n\n                3) Sandwitch    - 60rs         10) Chicken 65   - 60rs \n\n                4) Pasta        - 40rs         11) Noodles      - 60rs\n\n                5) Misal pav    - 50rs         12) Pav Bhaji    - 85rs\n\n                6) Chicken Rice  - 80rs        13) Soup         - 45rs\n\n                7) Samosa       - 30rs         14) Dosa         - 60rs\n\n                8) Salad        - 50rs         15) Paneer Masala -120rs\n ");

    printf("\n ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");

    printf("\n CUSTOMER INFORMATION :\n ");
    printf("\n Customer Name: ");
    scanf("%s", s[1].name);

    printf("\n Customer Address: ");
    scanf("%s", s[1].adrs);
    printf("\n ******************************************************************************* \n\n");

    printf("\n Enter the name of items: ");
    scanf("%s", ch);

    printf("\n Enter the number of item: ");
    scanf("%d", &n);


    printf("\n Enter the Quantity of items: ");
    scanf("%d", &quant);

    switch (n)
    {
    case 1:
        n = 25;
        gst = (n / 100) * 18;
        total = n + gst;
        break;

    case 2:
        n = 200;
        gst = (n / 100) * 18;
        total = n + gst;
        break;

    case 3:
        n = 60;
        gst = (n / 100) * 18;
        total = n + gst;
        break;

    case 4:
        n = 40;
        gst = (n / 100) * 18;
        total = n + gst;
        break;

    case 5:
        n = 50;
        gst = (n / 100) * 18;
        total = n + gst;
        break;

    case 6:
        n = 80;
        gst = (n / 100) * 18;
        total = n + gst;
        break;

    case 7:
        n = 30;
        gst = (n / 100) * 18;
        total = n + gst;
        break;

    case 8:
        n = 50;
        gst = (n / 100) * 18;
        total = n + gst;
        break;

    case 9:
        n = 100;
        gst = (n / 100) * 18;
        total = n + gst;
        break;

    case 10:
        n = 60;
        gst = (n / 100) * 18;
        total = n + gst;
        break;

    case 11:
        n = 60;
        gst = (n / 100) * 18;
        total = n + gst;
        break;

    case 12:
        n = 85;
        gst = (n / 100) * 18;
        total = n + gst;
        break;

    case 13:
        n = 45;
        gst = (n / 100) * 18;
        total = n + gst;
        break;

    case 14:
        n = 60;
        gst = (n / 100) * 18;
        total = n + gst;
        break;

    case 15:
        n = 120;
        gst = (n / 100) * 18;
        total = n + gst;
        break;
    }
//Gst will applicable only on 100rs or above,on one purchase.
    printf("\n\n |***************************** Hotel Amrut ***********************************|\n");

    printf("\n customer name: %s\n", s[1].name);

    printf("\n customer address: %s\n", s[1].adrs);
    prtline();
    printf("\n  Item       Quantity    Price     Gst     Total\n");
    printf("\n  %6s    %6d     %4d     %4d      %4d \n", ch, quant,n, gst, total*quant);

    prtline();
    //textcolor(WHITE);
    printf("\nThank you! do visit again\n");

    getch();
}

prtline()
{
    printf("\n ============================================================================= \n");
}
