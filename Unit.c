#include<stdio.h>
int main()
{
    float L,M,T;
    int n,m;
    char ch;
    while(1)
    {
        printf("Select Your Preferred Conversion:\n1.Length\n2.Mass\n3.Time\n4.Currency\n5.Temperature\n6.Pressure\n7.Power\n8.Energy\n9.Area\n10.Volume\n");
        scanf("%d",&n);
        printf("Do you wish to continue?\nClick Y for yes or\nN for no.\n");
        ch=getchar();
        if(ch=='N'||ch=='n')
        {
            break;
        }
        if(n==1)
        {
            printf("Choose Your Preferred Length Unit:\n");
            printf("1.Meter to Kilometer\n2.Kilometer to Mile\n3.Meter to Foot\n4.Kilometer to Yard\n5.Feet to Inches\n");
            scanf("%d",&m);
            switch(m)
            {
            case 1:
                printf("Enter Meter value:\n");
                scanf("%f",&L);
                printf("The Kilometer Value:%f\n",L/1000);
                break;
            case 2:
                printf("Enter the Kilometer Value:\n");
                scanf("%f",&L);
                printf("The Miles Value:%f\n",L/1.609);
                break;
            case 3:
                printf("Enter the Meter value:\n");
                scanf("%f",&L);
                printf("The Foot Value:%f\n",L*3.281);
                break;
            case 4:
                printf("Enter the Kilometer Value:\n");
                scanf("%f",&L);
                printf("The Yards Value:%f\n",L*1093.61);
                break;
            case 5:
                printf("Enter the Feet value:\n");
                scanf("%f",&L);
                printf("The Inches Value:%f\n",L*12);
                break;
            }
        }
        else if(n==2)
        {
            printf("Choose Your Preferred Mass Unit:\n");
            printf("1.Gram to Kilogram\n2.Kilogram to Pound\n3.Gram to Ounce\n4.Gram to Ton\n5.Ounce to Pound\n");
            scanf("%d",&m);
            switch(m)
            {
            case 1:
                printf("Enter Gram value:\n");
                scanf("%f",&M);
                printf("The Kilogram Value:%f\n",M/1000);
                break;
            case 2:
                printf("Enter the Kilometer Value:\n");
                scanf("%f",&M);
                printf("The Pound Value:%f\n",M*2.205);
                break;
            case 3:
                printf("Enter the Gram value:\n");
                scanf("%f",&M);
                printf("The Ounce Value:%f\n",M/28.35);
                break;
            case 4:
                printf("Enter the Gram Value:\n");
                scanf("%f",&M);
                printf("The Tons Value:%f\n",M/907184.74);
                break;
            case 5:
                printf("Enter the Ounce value:\n");
                scanf("%f",&M);
                printf("The Pound Value:%f\n",M/16);
                break;
            }
        }
        else if(n==3)
        {
            printf("Choose Your Preferred Time Unit:\n");
            printf("1.Day to Hour\n2.Hour to Minute\n3.Second to Millisecond\n4.Minute to Second\n5.Millisecond to Nanosecond\n");
            scanf("%d",&m);
            switch(m)
            {
            case 1:
                printf("Enter number of Days:\n");
                scanf("%f",&T);
                printf("The number of Hours:%f\n",T*24);
                break;
            case 2:
                printf("Enter the number of Hours:\n");
                scanf("%f",&T);
                printf("The number of Minutes:%f\n",T*60);
                break;
            case 3:
                printf("Enter the number of Seconds:\n");
                scanf("%f",&T);
                printf("The Millisecond Value:%f\n",T*1000);
                break;
            case 4:
                printf("Enter the Minute Value:\n");
                scanf("%f",&T);
                printf("The Seconds Value:%f\n",T*60);
                break;
            case 5:
                printf("Enter the Millisecond value:\n");
                scanf("%f",&T);
                printf("The Nanosecond Value:%f\n",T*1000000);
                break;
            }
        }
        else if(n==4)
        {
            printf("Choose Your Preferred Currency Unit:\n");
            printf("1.USD to BDT\n2.EUR to BDT\n3.GBP to BDT\n4.INR to BDT\n5.SAR to BDT\n6.BDT to USD\n7.BDT to EUR\n8.BDT to GBP\n9.BDT to INR\n10.BDT to SAR\n");
            scanf("%d",&m);
            switch(m)
            {
            case 1:
                printf("Enter USD value:\n");
                scanf("%f",&M);
                printf("The BDT Value:%f\n",M*83.84);
                break;
            case 2:
                printf("Enter the EUR Value:\n");
                scanf("%f",&M);
                printf("The BDT Value:%f\n",M*95.2036);
                break;
            case 3:
                printf("Enter the GBP value:\n");
                scanf("%f",&M);
                printf("The BDT Value:%f\n",M*107.528);
                break;
            case 4:
                printf("Enter the INR Value:\n");
                scanf("%f",&M);
                printf("The BDT Value:%f\n",M*1.187);
                break;
            case 5:
                printf("Enter the SAR value:\n");
                scanf("%f",&M);
                printf("The BDT Value:%f\n",M*22.3538);
                break;
            case 6:
                printf("Enter the BDT value:\n");
                scanf("%f",&M);
                printf("The USD Value:%f\n",M*0.0119275);
                break;
            case 7:
                printf("Enter the BDT value:\n");
                scanf("%f",&M);
                printf("The EUR Value:%f\n",M*0.0105038045);
                break;
            case 8:
                printf("Enter the BDT value:\n");
                scanf("%f",&M);
                printf("The GBP Value:%f\n",M*0.009299903281);
                break;
            case 9:
                printf("Enter the BDT value:\n");
                scanf("%f",&M);
                printf("The INR Value:%f\n",M*0.8424599832);
                break;
            case 10:
                printf("Enter the BDT value:\n");
                scanf("%f",&M);
                printf("The SAR Value:%f\n",M*0.044735);
                break;
            }
        }
        else if(n==5)
        {
            printf("Choose Your Preferred Temperature Unit:\n");
            printf("1. Fahrenheit to Kelvin\n2.Fahrenheit to Celsius\n3. Celsius to Kelvin\n4. Celsius to Fahrenheit\n5.Kelvin to Fahrenheit\n6.Kelvin to Celsius\n");
            scanf("%d",&m);
            switch(m)
            {
            case 1:
                printf("Enter Fahrenheit value:\n");
                scanf("%f",&M);
                printf("The kelvin Value:%f\n",(5*(M-32)/9)+273);
                break;
            case 2:
                printf("Enter the Fahrenheit Value:\n");
                scanf("%f",&M);
                printf("The Celsius Value:%f\n",(5*(M-32)/9));
                break;
            case 3:
                printf("Enter the Celsius value:\n");
                scanf("%f",&M);
                printf("The kelvin Value:%f\n",M+273);
                break;
            case 4:
                printf("Enter the Celsius Value:\n");
                scanf("%f",&M);
                printf("The Fahrenheit Value:%f\n",(9*M/5)+32);
                break;
            case 5:
                printf("Enter the kelvin value:\n");
                scanf("%f",&M);
                printf("The Fahrenheit Value:%f\n",9*(M-273)/5+32);
                break;
            case 6:
                printf("Enter the kelvin value:\n");
                scanf("%f",&M);
                printf("The Celsius Value:%f\n",M-273);
                break;
            }
        }
        else if(n==6)
        {
            printf("Choose Your Preferred Pressure Unit:\n");
            printf("1.atm to bar\n2.atm to kpa\n3.atm to millibar\n4.atm to pascal\n5.bar to atm\n6.kpa to atm\n7.millibar to atm\n8.pascal to atm\n");
            scanf("%d",&m);
            switch(m)
            {
            case 1:
                printf("Enter atm value:\n");
                scanf("%f",&M);
                printf("The bar Value:%f\n",M*1.0132);
                break;
            case 2:
                printf("Enter the atm Value:\n");
                scanf("%f",&M);
                printf("The kpa Value:%f\n",M*101.325);
                break;
            case 3:
                printf("Enter the atm value:\n");
                scanf("%f",&M);
                printf("The millibar Value:%f\n",M*1013.25);
                break;
            case 4:
                printf("Enter the atm Value:\n");
                scanf("%f",&M);
                printf("The pascal Value:%f\n",M*101325);
                break;
            case 5:
                printf("Enter the bar value:\n");
                scanf("%f",&M);
                printf("The atm Value:%f\n",M*9869);
                break;
            case 6:
                printf("Enter the kpa value:\n");
                scanf("%f",&M);
                printf("The atm Value:%f\n",M*0.009869233);
                break;
            case 7:
                printf("Enter the millibar value:\n");
                scanf("%f",&M);
                printf("The atm Value:%f\n",M*0.000986923);
                break;
            case 8:
                printf("Enter the pascal value:\n");
                scanf("%f",&M);
                printf("The atm Value:%f\n",M*0.000009869);
                break;
            }
        }
        else if(n==7)
        {
            printf("Choose Your Preferred Power Unit:\n");
            printf("1.Watt to HP\n2.Ton to Watt\n3.Calorie to Joule\n4.HP to Watt\n5.Watt to Ton\n6.Joule to Calorie\n");
            scanf("%d",&m);
            switch(m)
            {
            case 1:
                printf("Enter Watt value:\n");
                scanf("%f",&M);
                printf("The HP Value:%f\n",M*0.001341022);
                break;
            case 2:
                printf("Enter the Ton Value:\n");
                scanf("%f",&M);
                printf("The Watt Value:%f\n",M*3516.852842067);
                break;
            case 3:
                printf("Enter the Calorie value:\n");
                scanf("%f",&M);
                printf("The Joule Value:%f\n",M*4.1868);
                break;
            case 4:
                printf("Enter the HP Value:\n");
                scanf("%f",&M);
                printf("The Watt Value:%f\n",M*745.699871582);
                break;
            case 5:
                printf("Enter the Watt value:\n");
                scanf("%f",&M);
                printf("The Ton Value:%f\n",M*0.000284345);
                break;
            case 6:
                printf("Enter the Joule value:\n");
                scanf("%f",&M);
                printf("The calorie Value:%f\n",M*0.238845897);
                break;

            }
        }
        else if(n==8)
        {
            printf("Choose Your Preferred Energy Unit:\n");
            printf("1.BTU to KJ\n2.KWH to BTU\n3.Watt to BTU/H\n4.HP to Watt\n5.Therm to BTU\n6.KJ to BTU\n7.BTU to KWH\n8.BTU/H to Watt\n9.Watt to HP\10.BTU to Therm\n");
            scanf("%d",&m);
            switch(m)
            {
            case 1:
                printf("Enter BTU value:\n");
                scanf("%f",&M);
                printf("The KJ Value:%f\n",M*1.05);
                break;
            case 2:
                printf("Enter the KWH Value:\n");
                scanf("%f",&M);
                printf("The BTU Value:%f\n",M*3412);
                break;
            case 3:
                printf("Enter the Watt value:\n");
                scanf("%f",&M);
                printf("The BTU/H Value:%f\n",M*3.4);
                break;
            case 4:
                printf("Enter the HP Value:\n");
                scanf("%f",&M);
                printf("The Watt Value:%f\n",M*756);
                break;
            case 5:
                printf("Enter the Therm value:\n");
                scanf("%f",&M);
                printf("The BTU Value:%f\n",M*100000);
                break;
            case 6:
                printf("Enter the KJ value:\n");
                scanf("%f",&M);
                printf("The BTU Value:%f\n",M*0.95238);
                break;
            case 7:
                printf("Enter the BTU value:\n");
                scanf("%f",&M);
                printf("The KWH Value:%f\n",M*0.000293083);
                break;
            case 8:
                printf("Enter the BTU/H value:\n");
                scanf("%f",&M);
                printf("The Watt Value:%f\n",M*0.2941176);
                break;

            case 9:
                printf("Enter the Watt value:\n");
                scanf("%f",&M);
                printf("The HP Value:%f\n",M*0.00134048);
                break;
            case 10:
                printf("Enter the BTU value:\n");
                scanf("%f",&M);
                printf("The Therm Value:%f\n",M*0.00001);
                break;


            }
        }
        else if(n==9)
        {
            printf("Choose Your Preferred Area Unit:\n");
            printf("1.Square meter to Hectare\n2.Are to Hectare\n3.Square meter to Square Kilometer/H\n4.Square meter to Hectometer\n5.Square meter to Square Millimeter\n6.Hectare to Square meter\n7.Hectare to Are\n8.Square kilometer to Square meter\n9.Hectometer to Square meter\10.Square Milimeter to Square meter\n");
            scanf("%d",&m);
            switch(m)
            {
            case 1:
                printf("Enter Square meter value:\n");
                scanf("%f",&M);
                printf("The Hectare Value:%f\n",M*0.0001);
                break;
            case 2:
                printf("Enter the Are Value:\n");
                scanf("%f",&M);
                printf("The Hectare Value:%f\n",M*0.01);
                break;
            case 3:
                printf("Enter the Square meter value:\n");
                scanf("%f",&M);
                printf("The Square Kilometer Value:%f\n",M*0.000001);
                break;
            case 4:
                printf("Enter the Square meter Value:\n");
                scanf("%f",&M);
                printf("The Hectometer Value:%f\n",M*0.0001);
                break;
            case 5:
                printf("Enter the Square meter value:\n");
                scanf("%f",&M);
                printf("The Square Millimeter Value:%f\n",M*1000000);
                break;
            case 6:
                printf("Enter the Hectare value:\n");
                scanf("%f",&M);
                printf("The Square meter Value:%f\n",M*10000);
                break;
            case 7:
                printf("Enter the Hectare value:\n");
                scanf("%f",&M);
                printf("The Are Value:%f\n",M*100);
                break;
            case 8:
                printf("Enter the Square Kilometer value:\n");
                scanf("%f",&M);
                printf("The Square meter Value:%f\n",M*1000000);
                break;

            case 9:
                printf("Enter the Hectometer value:\n");
                scanf("%f",&M);
                printf("The Square meter Value:%f\n",M*10000);
                break;
            case 10:
                printf("Enter the Square Millimeter value:\n");
                scanf("%f",&M);
                printf("The Square meter Value:%f\n",M*0.000001);
                break;
            }
        }
        else if(n==10)
        {
            printf("Choose Your Preferred Volume Unit:\n");
            printf("1.Liter to Cubic meter\n2.Cubic meter to Milliliter\n3.Liter to Milliliter\n4.Barrel to Liter\n5.Liter to Gallon\n");
            scanf("%d",&m);
            switch(m)
            {
            case 1:
                printf("Enter Liter value:\n");
                scanf("%f",&L);
                printf("The Cubic meter Value:%f\n",L/1000);
                break;
            case 2:
                printf("Enter the Cubic meter Value:\n");
                scanf("%f",&L);
                printf("The Milliliter Value:%f\n",L*1000000);
                break;
            case 3:
                printf("Enter the Liter value:\n");
                scanf("%f",&L);
                printf("The Milliliter Value:%f\n",L*1000);
                break;
            case 4:
                printf("Enter the Barrel Value:\n");
                scanf("%f",&L);
                printf("The Gallon Value:%f\n",L*158.97);
                break;
            case 5:
                printf("Enter the Liter value:\n");
                scanf("%f",&L);
                printf("The Gallon Value:%f\n",L/3.785);
                break;
            }
        }
        else
        {
            printf("Choose between 1-10.\n");
        }
    }
    return 0;
}

