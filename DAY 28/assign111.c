#include<stdio.h>
#include<string.h>

struct Booking //Structure to store booking details
{
  int seatNumber;
  char passengerName[50];
  int isBooked; // 0:available, 1:booked
};

void initializeSeats(struct Booking seats[]) //Function to initialize seats
{
  for(int i=0; i<10; i++)
   {
    seats[i].seatNumber= i+1;
    seats[i].isBooked= 0;
    strcpy(seats[i].passengerName, "");
    }
}

void viewAvailableSeats(struct Booking seats[]) //Function to display available seats
 {
   printf("\n Available Seats: \n");
   int found = 0;
   for(int i=0; i<10; i++)
    {
     if (!seats[i].isBooked)
      {
        printf("Seat %d\n", seats[i].seatNumber);
        found=1;
      }
    }
    if(!found)
    {
      printf("No seats available.\n");
    }
  }

 void bookSeat(struct Booking seats[]) //Function to book a seat
 {
  int seatNum;
  char name[50];

 printf("\n Enter seat number to book (1-10): ");
 scanf("%d", &seatNum);
 if(seatNum<1 || seatNum>10)
  {
    printf("Invalid seat number.\n");
  }

 if(seats[seatNum-1].isBooked)
  {
    printf("Seat %d is already booked. \n", seatNum);
    return;
  }

  printf("Enter passenger name: ");
  fgets(name, sizeof(name), stdin);
  seats[seatNum - 1].isBooked = 1;
  strcpy(seats[seatNum - 1].passengerName, name);
  printf("Seat %d booked successfully for %s.\n", seatNum, name);
 } 

void cancelBooking(struct Booking seats[]) //Function to cancel a booking
 {
   int seatNum;
   printf("\n Enter seat number to cancel booking (1-10): ");
   scanf("%d", &seatNum);
   if(seatNum < 1 || seatNum > 10)
    {
      printf("Invalid seat number.\n");

    }

 if(!seats[seatNum-1].isBooked)
  {
    printf("Seat %d is not booked.\n", seatNum);
    return;
  }

 seats[seatNum-1].isBooked=0;
 strcpy(seats[seatNum - 1].passengerName, "");
 printf("Booking for seat %d has been cancelled.\n", seatNum);
 }

void viewAllBookings(struct Booking seats[]) //Function to view all bookings
{
 printf("\n All Bookings:\n");
 int found=0;
 for(int i=0; i<10; i++)
  {
    if(seats[i].isBooked)
     {
        printf("Seat %d - %s\n", seats[i].seatNumber, seats[i].passengerName);
        found=1;
     }
  }
  if(!found)
   {
    printf("No bookings found.\n");
    }
}

int main() 
{
  struct Booking seats[10];
  int choice;
  initializeSeats(seats);

  while(1)
   {
    printf("\n--Ticket Booking System--\n");
    printf("1.View Available Seats \n");
    printf("2.Book a Seat \n");
    printf("3.Cancel Booking \n");
    printf("4.View All Bookings \n");
    printf("5.Exit \n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    if(choice!= 1)
    {
       printf("Invalid input. Please enter a number.\n");
    }

    switch(choice)
    {
     case 1:
      viewAvailableSeats(seats);
      break;

     case 2:
      bookSeat(seats);
       break;

     case 3:
       cancelBooking(seats);
       break;
           
     case 4:
       viewAllBookings(seats);
        break;
        
     case 5:
       printf("Exiting... Thank you!\n");
       return 0;
       
     default:
        printf("Invalid choice. Please try again.\n");
    }
    }
    return 0;
}