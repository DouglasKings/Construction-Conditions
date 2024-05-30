#include <stdio.h>

//Function Prototype
double calculateCommissionOnHammers(int Quantity, double Price);
double calculateCommissionOnDrills(int Quantity, double Price);
double calculateCommissionOnPliers(int Quantity, double Price);
double calculateCommissionOnChisels(int Quantity, double Price);
double calculateCommissionOnScrewdrivers(int Quantity, double Price);
double calculateCommissionOnTapes(int Quantity, double Price);

int main(){

    int Quantity, Items;
    double Price, Commission;

    printf("Enter the item to be purchased(1 for Hammers, 2 for Drills, 3 for Pliers, 4 for Chisels, 5 for Screwdrivers, 6 for Tapes): ");
    scanf("%d", &Items);
    printf("Enter the selling price per item: ");
    scanf("%lf", &Price);
    printf("Enter the quantity of the items marketted: ");
    scanf("%d", &Quantity);

    switch(Items){
        case 1:
            printf("Hammers \n");
            Commission = calculateCommissionOnHammers(Quantity, Price);
            break;
        case 2:
            printf("Drills \n");
            Commission =  calculateCommissionOnDrills(Quantity, Price);
            break;
        case 3:
            printf("Pliers \n");
            Commission = calculateCommissionOnPliers(Quantity, Price);
            break;
        case 4:
            printf("Chisels \n");
            Commission = calculateCommissionOnChisels(Quantity, Price);
            break;
        case 5:
            printf("Screwdrivers \n");
            Commission = calculateCommissionOnScrewdrivers(Quantity, Price);
            break;
        case 6:
            printf("Tapes \n");
            Commission = calculateCommissionOnTapes(Quantity, Price);
            break;
        default:
            printf("Invalid item selected.\n");
            return 1;
    }

    printf("The selling price is %.2lf\n", Price);
    printf("The quantity is %d\n", Quantity);
    printf("The commission per item marketed is %.2lf\n", Commission);

    return 0;
}

//Function definition
double calculateCommissionOnHammers(int Quantity, double Price){
    double Commission;
    if(Quantity < 100){
        printf("No Commission. \n");
    }else if(Quantity >= 100 && Quantity < 250){
        Commission = Price * 0.05;
        printf("The Commission is %.2lf \n", Commission);
    }else if(Quantity >= 250){
        Commission = Price * 0.1;
        printf("The Commission is %.2lf \n", Commission);
    }else{

    }
    return Commission;
}
double calculateCommissionOnDrills(int Quantity, double Price){
    double Commission;
    if(Quantity < 50){
        printf("No Commission. \n");
    }else if(Quantity >= 50 && Quantity < 350){
        Commission = Price * 0.15;
        printf("The Commission is %.2lf \n", Commission);
    }else if(Quantity >= 350){
        Commission = Price * 0.2;
        printf("The Commission is %.2lf \n", Commission);
    }else{

    }
    return Commission;
}

double calculateCommissionOnPliers(int Quantity, double Price){
    double Commission;
    if(Quantity < 200){
        printf("No Commission. \n");
    }else if(Quantity >= 200 && Quantity < 350){
        Commission = Price * 0.1;
        printf("The Commission is %.2lf \n", Commission);
    }else if(Quantity >= 350){
        Commission = Price * 0.25;
        printf("The Commission is %.2lf \n", Commission);
    }else{

    }
    return Commission;
}
double calculateCommissionOnChisels(int Quantity, double Price){
    double Commission;
    if(Quantity < 100){
        printf("No Commission. \n");
    }else if(Quantity >= 100 && Quantity < 250){
        Commission = Price * 0.05;
        printf("The Commission is %.2lf \n", Commission);
    }else if(Quantity >= 250){
        Commission = Price * 0.10;
        printf("The Commission is %.2lf \n", Commission);
    }else{

    }
    return Commission;
}
double calculateCommissionOnScrewdrivers(int Quantity, double Price){
    double Commission;
    if(Quantity < 100){
        printf("No Commission. \n");
    }else if(Quantity >= 100 && Quantity < 250){
        Commission = Price * 0.05;
        printf("The Commission is %.2lf \n", Commission);
    }else if(Quantity >= 250){
        Commission = Price * 0.10;
        printf("The Commission is %.2lf \n", Commission);
    }else{

    }
    return Commission;
}
double calculateCommissionOnTapes(int Quantity, double Price){
    double Commission;
    if(Quantity < 100){
        printf("No Commission. \n");
    }else if(Quantity >= 100 && Quantity < 250){
        Commission = Price * 0.05;
        printf("The Commission is %.2lf \n", Commission);
    }else if(Quantity >= 250){
        Commission = Price * 0.10;
        printf("The Commission is %.2lf \n", Commission);
    }else{

    }
    return Commission;
}