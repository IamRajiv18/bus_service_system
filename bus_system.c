
#include<stdio.h>
#include <stdlib.h>
#include <time.h>
#include<string.h>
// login interface//
void login(){
    char username[20], password[20];
    printf("                                         Enter username: ");
    scanf("%s", username);
    printf("                                         Enter password: ");
    scanf("%s", password);
    if (strcmp(username, "rk") == 0 && strcmp(password, "123") == 0) {
        printf("Login successful!\n");
    } else {
        printf("Invalid username or password. Please try again.\n");
    }
}

// list of bus//
void display_bus_list() {
    printf("Bus List:\n");
    printf(" _________________________________________________________________\n");
    printf("| Bus Number | Starting Destination | Finish Destination  | Time  |\n");
    printf("|------------|----------------------|---------------------|------ |\n");
    printf("| 164        | Delhi                | Mumbai              | 9:00  |\n");
    printf("| 285        | Mumbai               | Delhi               | 10:00 |\n");
    printf("| 345        | Delhi                | Bangalore           | 11:00 |\n");
    printf("| 489        | Bangalore            | Delhi               | 12:00 |\n");
    printf("| 576        | Delhi                | Kolkata             | 13:00 |\n");
    printf(" _________________________________________________________________\n");
    printf(" \n");
}


// booking tickets//
void book_ticket() {
    char name[50];
    
    int age;
    long long phone;
    int amount;
    int bus;
    int ticket_no;

    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your phone number: ");
    scanf("%lld", &phone);

    printf("Enter ticket amount: ");
    scanf("%d", &amount);
    //for booking refrence//
    printf("Bus List:\n");
    printf(" _________________________________________________________________\n");
    printf("| Bus Number | Starting Destination | Finish Destination  | Time  |\n");
    printf("|------------|----------------------|---------------------|------ |\n");
    printf("| 164        | Delhi                | Mumbai              | 9:00  |\n");
    printf("| 285        | Mumbai               | Delhi               | 10:00 |\n");
    printf("| 345        | Delhi                | Bangalore           | 11:00 |\n");
    printf("| 489        | Bangalore            | Delhi               | 12:00 |\n");
    printf("| 576        | Delhi                | Kolkata             | 13:00 |\n");
    printf(" _________________________________________________________________\n");
    printf(" \n");
    // taking information of bus//
    printf("Enter your bus number according to your need: ");
    scanf("%d", &bus);
    printf("                           1A 1B    1C 1D\n");
    printf("                           2A 2B    2C 2D\n");
    printf("                           3A 3B    3C 3D\n");
    printf("                           4A 4B    4C 4D\n");
    printf("                           5A 5B    5C 5D\n");
    printf("                           6A 6B    6C 6D\n");
    printf("                           7A 7B    7C 7D\n");
    printf("                           8A 8B    8C 8D\n");
    printf("                           9A 9B    9C 9D\n");
    printf("");
    char strings[5][20];

    
    for (int i = 0; i < amount; i++) {
        printf("enter %d seat no",i);
        scanf("%s", strings[i]);
    }

    
    


    // Generate a random ticket serial number
    srand(time(0));
    ticket_no = rand() % 1000000;

    printf("\n                                    Ticket booked successfully!\n");
    printf("____________________________________________________________________________\n");
    printf("                                     TICKET\n");
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Phone number: %lld\n", phone);
    printf("Ticket amount: %d rs\n", 500*amount);
    printf("Ticket serial number: %d\n", ticket_no);
    if (bus== 164) {
        printf(" \n");
        printf("| Bus Number | Starting Destination | Finish Destination  | Time  |\n");
        printf("|------------|----------------------|---------------------|------ |\n");
        printf("| 164        | Delhi                | Mumbai              | 9:00  |\n");
    
    } else if (bus == 285) {
        printf(" \n");
        printf("| Bus Number | Starting Destination | Finish Destination  | Time  |\n");
        printf("|------------|----------------------|---------------------|------ |\n");
        printf("| 285        | Mumbai               | Delhi               | 10:00 |\n");
    
    } else if (bus == 345) {
        printf(" \n");
        printf("| Bus Number | Starting Destination | Finish Destination  | Time  |\n");
        printf("|------------|----------------------|---------------------|------ |\n");
        printf("| 345        | Delhi                | Bangalore           | 11:00 |\n");
    } else if (bus == 489) {
        printf(" \n");
        printf("| Bus Number | Starting Destination | Finish Destination  | Time  |\n");
        printf("|------------|----------------------|---------------------|------ |\n");
        printf("| 489        | Bangalore            | Delhi               | 12:00 |\n");
    } else if (bus == 576) {
        printf(" \n");
        printf("| Bus Number | Starting Destination | Finish Destination  | Time  |\n");
        printf("|------------|----------------------|---------------------|------ |\n");
        printf("| 576        | Delhi                | Kolkata             | 13:00 |\n");
    } else {
        printf("Invalid booking\n");
    }
    printf("your seat no is:\n");
    for (int i = 0; i < amount; i++) {
        printf("%s\n", strings[i]);
    }
    printf("\n");
    printf("____________________________________________________________________________\n");

}
//cancel booking//
void cancel_ticket() {
    int serial_no;
    float amount;
    printf("Enter the serial number of the ticket to be cancelled: ");
    scanf("%d", &serial_no);
    printf("Enter the amount paid for the ticket: ");
    scanf("%f", &amount);
    printf("Ticket with serial number %d has been cancelled.\n", serial_no);
    printf("Refund amount: $%.2f\n", amount);
}
void check_bus_status(int bus_number) {
    // Get the current time
    time_t now = time(NULL);
    struct tm *t = localtime(&now);

    // Generate a random status for the bus
    srand(time(0));
    int status_code = rand() % 3;
    char *status;
    switch (status_code) {
        case 0:
            status = "On time";
            break;
        case 1:
            status = "Delayed";
            break;
        case 2:
            status = "Cancelled";
            break;
    }

    // Print the bus status
    printf("Bus %d is scheduled to depart at %02d:%02d.\n", bus_number, t->tm_hour, t->tm_min);
    printf("Current status: %s\n", status);
}

    


// choosing a option according to list//
void choose_options() {
    int option;
    int bus_number;
    
    // main page for options//
    printf("                                                 HOME\n");
    printf("                                             (1) BUS LIST\n");
    printf("                                             (2) BOOK TICKETS\n");
    printf("                                             (3) CANCEL TICKETS\n");
    printf("                                             (4) BUS STATUS BOARD\n");
    printf("                                             (5) EXIT\n");
    
    printf("Choose an option according to your need b/w (1-5): ");
    scanf("%d", &option);

    
    
    //choosing options//
    if (option == 1) {
        printf(" \n");
        display_bus_list();
    } else if (option == 2) {
        printf(" \n");
        book_ticket();
    } else if (option == 3) {
        printf(" \n");
        cancel_ticket();

    } else if (option == 4) {
        printf(" \n");
        printf("Enter the bus number: ");
        scanf("%d", &bus_number);
        check_bus_status(bus_number);
    } else if (option == 5) {
        exit;
    } else {
        printf("Invalid option. Please choose a number between 1 and 5.\n");
    }
}


// main interface//
int main(){
    int c=1;
    printf("_________________________________________welcome to bus services____________________________________________\n");
    printf(" \n");
    login();
    printf(" \n");
    choose_options();
    
    while(c==1){
        choose_options();
        printf("____________________________________________________________________________________________________________\n");
        printf("do you want to run again press 1/0\n");
        
        printf("____________________________________________________________________________________________________________\n");
        scanf("%d",&c);

    }

    

    return 0;
}