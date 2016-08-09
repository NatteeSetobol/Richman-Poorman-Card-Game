#ifndef cards_H
#define cards_H
extern void cardsetup();
extern void sortcards(int playerz);
extern void swapcards(int playerz,int i, int j);
extern void drawcard(int cardvalue,char cardsuit,int x,int y);
extern void showcards();
extern void loadcardimages();
extern void pass_cards_out();
extern int cardsseled(int player);
extern void nosort(int player, int missingcard);
extern void playcards(int player,int cardnum);
extern int shimuricheck(int player,int selectedcard);

//void sortcards(struct* player tplayer);
 
void cardsetup()
{
     int i=0;
     int count=1;
     for (i=0;i<52;i+=4)
     {
         deck[i].value=count;
         deck[i].suit = 'h';
         deck[i+1].value=count;
         deck[i+1].suit = 'c';  
         deck[i+2].value=count;
         deck[i+2].suit = 's'; 
         deck[i+3].value=count;
         deck[i+3].suit = 'd';     
         count++;   
     }
     deck[52].value=14;
     deck[52].suit = 'j';
     deck[53].value=14;
     deck[53].suit = 'j';   
}

void shuffle()
{
	int rannum=0;
	int ValueTemp=0;
	char suittemp='\0';
	int j=0;
	srand(time(NULL));
	for (j=0;j<54;j++)
	{
		ValueTemp = deck[j].value;
		suittemp = deck[j].suit;
		rannum = rand() % 54;
		deck[j].value = deck[rannum].value;
		deck[j].suit = deck[rannum].suit;
		deck[rannum].value = ValueTemp;
		deck[rannum].suit = suittemp;
	}
     return ;
}

void sortcards(int playerz)
{

     int i=0;
     int j=0;
     
     for (i=0;i<11;i++)
     {
         for (j=0;j<11;j++)
         {
             if (players[playerz].cards[i].value < players[playerz].cards[j].value)
             {
                                                 if (players[playerz].cards[i].value != 1 || players[playerz].cards[i].value != 2)
                                                 { 
                                                                                     if (players[playerz].cards[j].value != 1 || players[playerz].cards[j].value != 2) 
                                                                                     {
                                                                                          swapcards(playerz,i, j);
                                                                                     }
                                                 }
             }
             if ((players[playerz].cards[j].value == 14 && players[playerz].cards[i].value == 2) || (players[playerz].cards[j].value == 14 && players[playerz].cards[i].value == 1))
             {
                           swapcards(playerz,i, j);                       
             } else
             if ((players[playerz].cards[j].value == 2 && players[playerz].cards[i].value == 14)  || (players[playerz].cards[j].value == 1 && players[playerz].cards[i].value == 14))
             {
             } else
             if (players[playerz].cards[j].value == 2)
             {
                            swapcards(playerz,i, j);   
             }    else
             if (players[playerz].cards[j].value == 1 && players[playerz].cards[i].value == 1)
             {
                            swapcards(playerz,i, j);  
             } else
             if (players[playerz].cards[j].value == 1 && players[playerz].cards[i].value == 2)
             {
             } else
             if (players[playerz].cards[j].value == 1)
             {
                            swapcards(playerz,i, j);  
             }
                
         }
     }
    
     
}

void swapcards(int playerz,int i, int j)
{
    int tempvalue;
    char tempsuit;
    int isvis=0;
    tempvalue = players[playerz].cards[i].value;
    tempsuit = players[playerz].cards[i].suit;
    players[playerz].cards[i].value =  players[playerz].cards[j].value;
    players[playerz].cards[i].suit =  players[playerz].cards[j].suit;                              
    players[playerz].cards[j].value = tempvalue;
    players[playerz].cards[j].suit = tempsuit;  
}

void drawcard(int cardvalue,char cardsuit,int x,int y)
{
     switch(cardvalue)
     {
                      case 1:
                      {
                           switch(cardsuit)
                           {
                                     case 'h':
                                     {
                                          h_ace->x = x;
                                          h_ace->y = y;
                                          oslDrawImage(h_ace); 
                                          break;
                                     }
                                     case 's':
                                     {
                                          s_ace->x = x;
                                          s_ace->y = y;
                                          oslDrawImage(s_ace); 
                                          break;
                                     } 
                                     case 'd':
                                     {
                                          d_ace->x = x;
                                          d_ace->y = y;
                                          oslDrawImage(d_ace); 
                                          break;
                                     }       
                                     case 'c':
                                     {
                                          c_ace->x = x;
                                          c_ace->y = y;
                                          oslDrawImage(c_ace); 
                                          break;
                                     }   
                           }
                           break;
                      }
                      case 2:
                      {
                           switch(cardsuit)
                           {
                                     case 'h':
                                     {
                                          h_two->x = x;
                                          h_two->y = y;
                                          oslDrawImage(h_two); 
                                          break;
                                     }
                                     case 's':
                                     {
                                          s_two->x = x;
                                          s_two->y = y;
                                          oslDrawImage(s_two); 
                                          break;
                                     } 
                                     case 'd':
                                     {
                                          d_two->x = x;
                                          d_two->y = y;
                                          oslDrawImage(d_two); 
                                          break;
                                     }       
                                     case 'c':
                                     {
                                          c_two->x = x;
                                          c_two->y = y;
                                          oslDrawImage(c_two); 
                                          break;
                                     }   
                           }
                           break;
                      }
                      case 3:
                      {
                           switch(cardsuit)
                           {
                                     case 'h':
                                     {
                                          h_three->x = x;
                                          h_three->y = y;
                                          oslDrawImage(h_three); 
                                          break;
                                     }
                                     case 's':
                                     {
                                          s_three->x = x;
                                          s_three->y = y;
                                          oslDrawImage(s_three); 
                                          break;
                                     } 
                                     case 'd':
                                     {
                                          d_three->x = x;
                                          d_three->y = y;
                                          oslDrawImage(d_three); 
                                          break;
                                     }       
                                     case 'c':
                                     {
                                          c_three->x = x;
                                          c_three->y = y;
                                          oslDrawImage(c_three); 
                                          break;
                                     }   
                           }
                           break;
                      }
                      case 4:
                      {
                           switch(cardsuit)
                           {
                                     case 'h':
                                     {
                                          h_four->x = x;
                                          h_four->y = y;
                                          oslDrawImage(h_four); 
                                          break;
                                     }
                                     case 's':
                                     {
                                          s_four->x = x;
                                          s_four->y = y;
                                          oslDrawImage(s_four); 
                                          break;
                                     } 
                                     case 'd':
                                     {
                                          d_four->x = x;
                                          d_four->y = y;
                                          oslDrawImage(d_four); 
                                          break;
                                     }       
                                     case 'c':
                                     {
                                          c_four->x = x;
                                          c_four->y = y;
                                          oslDrawImage(c_four); 
                                          break;
                                     }   
                           }
                           break;
                      }
                      case 5:
                      {
                           switch(cardsuit)
                           {
                                     case 'h':
                                     {
                                          h_five->x = x;
                                          h_five->y = y;
                                          oslDrawImage(h_five); 
                                          break;
                                     }
                                     case 's':
                                     {
                                          s_five->x = x;
                                          s_five->y = y;
                                          oslDrawImage(s_five); 
                                          break;
                                     } 
                                     case 'd':
                                     {
                                          d_five->x = x;
                                          d_five->y = y;
                                          oslDrawImage(d_five); 
                                          break;
                                     }       
                                     case 'c':
                                     {
                                          c_five->x = x;
                                          c_five->y = y;
                                          oslDrawImage(c_five); 
                                          break;
                                     }   
                           }
                           break;
                      }
                      case 6:
                      {
                           switch(cardsuit)
                           {
                                     case 'h':
                                     {
                                          h_six->x = x;
                                          h_six->y = y;
                                          oslDrawImage(h_six); 
                                          break;
                                     }
                                     case 's':
                                     {
                                          s_six->x = x;
                                          s_six->y = y;
                                          oslDrawImage(s_six); 
                                          break;
                                     } 
                                     case 'd':
                                     {
                                          d_six->x = x;
                                          d_six->y = y;
                                          oslDrawImage(d_six); 
                                          break;
                                     }       
                                     case 'c':
                                     {
                                          c_six->x = x;
                                          c_six->y = y;
                                          oslDrawImage(c_six); 
                                          break;
                                     }   
                           }
                           break;
                      }
                      case 7:
                      {
                           switch(cardsuit)
                           {
                                     case 'h':
                                     {
                                          h_seven->x = x;
                                          h_seven->y = y;
                                          oslDrawImage(h_seven); 
                                          break;
                                     }
                                     case 's':
                                     {
                                          s_seven->x = x;
                                          s_seven->y = y;
                                          oslDrawImage(s_seven); 
                                          break;
                                     } 
                                     case 'd':
                                     {
                                          d_seven->x = x;
                                          d_seven->y = y;
                                          oslDrawImage(d_seven); 
                                          break;
                                     }       
                                     case 'c':
                                     {
                                          c_seven->x = x;
                                          c_seven->y = y;
                                          oslDrawImage(c_seven); 
                                          break;
                                     }   
                           }
                           break;
                      }
                    case 8:
                      {
                           switch(cardsuit)
                           {
                                     case 'h':
                                     {
                                          h_eight->x = x;
                                          h_eight->y = y;
                                          oslDrawImage(h_eight); 
                                          break;
                                     }
                                     case 's':
                                     {
                                          s_eight->x = x;
                                          s_eight->y = y;
                                          oslDrawImage(s_eight); 
                                          break;
                                     } 
                                     case 'd':
                                     {
                                          d_eight->x = x;
                                          d_eight->y = y;
                                          oslDrawImage(d_eight); 
                                          break;
                                     }       
                                     case 'c':
                                     {
                                          c_eight->x = x;
                                          c_eight->y = y;
                                          oslDrawImage(c_eight); 
                                          break;
                                     }   
                           }
                           break;
                      }
                    case 9:
                      {
                           switch(cardsuit)
                           {
                                     case 'h':
                                     {
                                          h_nine->x = x;
                                          h_nine->y = y;
                                          oslDrawImage(h_nine); 
                                          break;
                                     }
                                     case 's':
                                     {
                                          s_nine->x = x;
                                          s_nine->y = y;
                                          oslDrawImage(s_nine); 
                                          break;
                                     } 
                                     case 'd':
                                     {
                                          d_nine->x = x;
                                          d_nine->y = y;
                                          oslDrawImage(d_nine); 
                                          break;
                                     }       
                                     case 'c':
                                     {
                                          c_nine->x = x;
                                          c_nine->y = y;
                                          oslDrawImage(c_nine); 
                                          break;
                                     }   
                           }
                           break;
                      }
                    case 10:
                      {
                           switch(cardsuit)
                           {
                                     case 'h':
                                     {
                                          h_ten->x = x;
                                          h_ten->y = y;
                                          oslDrawImage(h_ten); 
                                          break;
                                     }
                                     case 's':
                                     {
                                          s_ten->x = x;
                                          s_ten->y = y;
                                          oslDrawImage(s_ten); 
                                          break;
                                     } 
                                     case 'd':
                                     {
                                          d_ten->x = x;
                                          d_ten->y = y;
                                          oslDrawImage(d_ten); 
                                          break;
                                     }       
                                     case 'c':
                                     {
                                          c_ten->x = x;
                                          c_ten->y = y;
                                          oslDrawImage(c_ten); 
                                          break;
                                     }   
                           }
                           break;
                      }
                    case 11:
                      {
                           switch(cardsuit)
                           {
                                     case 'h':
                                     {
                                          h_jack->x = x;
                                          h_jack->y = y;
                                          oslDrawImage(h_jack); 
                                          break;
                                     }
                                     case 's':
                                     {
                                          s_jack->x = x;
                                          s_jack->y = y;
                                          oslDrawImage(s_jack); 
                                          break;
                                     } 
                                     case 'd':
                                     {
                                          d_jack->x = x;
                                          d_jack->y = y;
                                          oslDrawImage(d_jack); 
                                          break;
                                     }       
                                     case 'c':
                                     {
                                          c_jack->x = x;
                                          c_jack->y = y;
                                          oslDrawImage(c_jack); 
                                          break;
                                     }   
                           }
                           break;
                      }
                    case 12:
                      {
                           switch(cardsuit)
                           {
                                     case 'h':
                                     {
                                          h_queen->x = x;
                                          h_queen->y = y;
                                          oslDrawImage(h_queen); 
                                          break;
                                     }
                                     case 's':
                                     {
                                          s_queen->x = x;
                                          s_queen->y = y;
                                          oslDrawImage(s_queen); 
                                          break;
                                     } 
                                     case 'd':
                                     {
                                          d_queen->x = x;
                                          d_queen->y = y;
                                          oslDrawImage(d_queen); 
                                          break;
                                     }       
                                     case 'c':
                                     {
                                          c_queen->x = x;
                                          c_queen->y = y;
                                          oslDrawImage(c_queen); 
                                          break;
                                     }   
                           }
                           break;
                      }
                    case 13:
                      {
                           switch(cardsuit)
                           {
                                     case 'h':
                                     {
                                          h_king->x = x;
                                          h_king->y = y;
                                          oslDrawImage(h_king); 
                                          break;
                                     }
                                     case 's':
                                     {
                                          s_king->x = x;
                                          s_king->y = y;
                                          oslDrawImage(s_king); 
                                          break;
                                     } 
                                     case 'd':
                                     {
                                          d_king->x = x;
                                          d_king->y = y;
                                          oslDrawImage(d_king); 
                                          break;
                                     }       
                                     case 'c':
                                     {
                                          c_king->x = x;
                                          c_king->y = y;
                                          oslDrawImage(c_king); 
                                          break;
                                     }   
                           }
                           break;
                      }
                 case 14:
                 {
                      Joker->x = x;
                      Joker->y = y;
                      oslDrawImage(Joker);                       
                      break;
                 }
     }
}

void showcards()
{
     int i=0;
     players[4].card_pos=75;                  
     for (i=0;i<11;i++)
     {
          if (players[4].cards[i].visible == 1 && players[4].cards[i].value != 0)
          {
                 cardback_v->y=players[4].card_pos;
                 cardback_v->x = 457;
                 cardback_v->angle = 90;
                 oslDrawImage(cardback_v); 
                 players[4].card_pos+=10;
          }
     }
                                                    
     players[3].card_pos=20;
     for (i=0;i<11;i++)
     {
         if (players[3].cards[i].visible == 1 && players[3].cards[i].value != 0)
         {
             cardback_h->y=20;
             cardback_h->x = players[3].card_pos;
             oslDrawImage(cardback_h); 
             players[3].card_pos+=10;
         }
     }
                                          
     players[2].card_pos=75;    
     for (i=0;i<11;i++)
     {
          if (players[2].cards[i].visible == 1 && players[2].cards[i].value != 0)
          {
              cardback_v->y=players[2].card_pos;
              cardback_v->x = 45;
              cardback_v->angle = 90;
              oslDrawImage(cardback_v); 
              players[2].card_pos+=10;
          }
     }
                        
     players[1].card_pos=123;
     for (i=0;i<11;i++)
     {
          if (players[1].cards[i].visible == 1 && players[1].cards[i].value != 0)
          {
               cardback_h->y=220;
               cardback_h->x = players[1].card_pos;
               oslDrawImage(cardback_h); 
               players[1].card_pos-=10;
          }
     }
                                             
     players[0].card_pos=194;
     for (i=0;i< 11;i++)
     {
           if (players[0].cards[i].visible == 1)
           {
                  drawcard(players[0].cards[i].value,players[0].cards[i].suit,players[0].card_pos,190);
                  
                  if (players[0].cards[i].selected == 1)
                  {
                     selimg->y=190;
                     selimg->x = players[0].card_pos;
                     oslDrawImage(selimg);                      
                  }
                  
                  players[0].card_pos+=15;
           }
     }
}
void loadcardimages()
{

    c_ace = oslLoadImageFile("/cards/c_ace.PNG", OSL_IN_RAM, OSL_PF_5551);    
    oslUncacheImage(titlescreen);  

    c_two = oslLoadImageFile("/cards/c_two.PNG", OSL_IN_RAM, OSL_PF_5551);   
    oslUncacheImage(c_two);

    c_three = oslLoadImageFile("/cards/c_three.PNG", OSL_IN_RAM, OSL_PF_5551);  
    oslUncacheImage(c_three);

    c_four = oslLoadImageFile("/cards/c_four.PNG", OSL_IN_RAM, OSL_PF_5551);   
    oslUncacheImage(c_four);

    c_five = oslLoadImageFile("/cards/c_five.PNG", OSL_IN_RAM, OSL_PF_5551);   
    oslUncacheImage(c_five);

    c_six = oslLoadImageFile("/cards/c_six.PNG", OSL_IN_RAM, OSL_PF_5551);   
    oslUncacheImage(c_six);

    c_seven = oslLoadImageFile("/cards/c_seven.PNG", OSL_IN_RAM, OSL_PF_5551); 
    oslUncacheImage(c_seven);

    c_eight = oslLoadImageFile("/cards/c_eight.PNG", OSL_IN_RAM, OSL_PF_5551); 
    oslUncacheImage(c_eight);

    c_nine = oslLoadImageFile("/cards/c_nine.PNG", OSL_IN_RAM, OSL_PF_5551); 
    oslUncacheImage(c_nine);

    c_ten = oslLoadImageFile("/cards/c_ten.PNG", OSL_IN_RAM, OSL_PF_5551); 
    oslUncacheImage(c_ten);

    c_jack = oslLoadImageFile("/cards/c_jack.PNG", OSL_IN_RAM, OSL_PF_5551); 
    oslUncacheImage(c_jack);

    c_queen = oslLoadImageFile("/cards/c_queen.PNG", OSL_IN_RAM, OSL_PF_5551); 
    oslUncacheImage(c_queen);

    c_king = oslLoadImageFile("/cards/c_king.PNG", OSL_IN_RAM, OSL_PF_5551); 
    oslUncacheImage(c_king);

    h_ace = oslLoadImageFile("/cards/h_ace.PNG", OSL_IN_RAM, OSL_PF_5551);    
    oslUncacheImage(h_ace);

    h_two = oslLoadImageFile("/cards/h_two.PNG", OSL_IN_RAM, OSL_PF_5551);   
    oslUncacheImage(h_two);

    h_three = oslLoadImageFile("/cards/h_three.PNG", OSL_IN_RAM, OSL_PF_5551);  
    oslUncacheImage(h_three);

    h_four = oslLoadImageFile("/cards/h_four.PNG", OSL_IN_RAM, OSL_PF_5551);   
    oslUncacheImage(h_four);
  
    h_five = oslLoadImageFile("/cards/h_five.PNG", OSL_IN_RAM, OSL_PF_5551);   
    oslUncacheImage(h_five);

    h_six = oslLoadImageFile("/cards/h_six.PNG", OSL_IN_RAM, OSL_PF_5551);   
    oslUncacheImage(h_six);
 
    h_seven = oslLoadImageFile("/cards/h_seven.PNG", OSL_IN_RAM, OSL_PF_5551); 
    oslUncacheImage(h_seven);
  
    h_eight = oslLoadImageFile("/cards/h_eight.PNG", OSL_IN_RAM, OSL_PF_5551); 
    oslUncacheImage(h_eight);

    h_nine = oslLoadImageFile("/cards/h_nine.PNG", OSL_IN_RAM, OSL_PF_5551); 
    oslUncacheImage(h_nine);
 
    h_ten = oslLoadImageFile("/cards/h_ten.PNG", OSL_IN_RAM, OSL_PF_5551); 
    oslUncacheImage(h_ten);

    h_jack = oslLoadImageFile("/cards/h_jack.PNG", OSL_IN_RAM, OSL_PF_5551); 
    oslUncacheImage(h_jack);

    h_queen = oslLoadImageFile("/cards/h_queen.PNG", OSL_IN_RAM, OSL_PF_5551); 
    oslUncacheImage(h_queen);

    h_king = oslLoadImageFile("/cards/h_king.PNG", OSL_IN_RAM, OSL_PF_5551); 
    oslUncacheImage(h_king);
     //diamonds

    d_ace = oslLoadImageFile("/cards/d_ace.PNG", OSL_IN_RAM, OSL_PF_5551);    
    oslUncacheImage(d_ace);

    d_two = oslLoadImageFile("/cards/d_two.PNG", OSL_IN_RAM, OSL_PF_5551);   
    oslUncacheImage(d_two);

    d_three = oslLoadImageFile("/cards/d_three.PNG", OSL_IN_RAM, OSL_PF_5551);  
    oslUncacheImage(d_three );

    d_four = oslLoadImageFile("/cards/d_four.PNG", OSL_IN_RAM, OSL_PF_5551);   
    oslUncacheImage(d_four);

    d_five = oslLoadImageFile("/cards/d_five.PNG", OSL_IN_RAM, OSL_PF_5551);   
    oslUncacheImage(d_five);

    d_six = oslLoadImageFile("/cards/d_six.PNG", OSL_IN_RAM, OSL_PF_5551);   
    oslUncacheImage(d_six);

    d_seven = oslLoadImageFile("/cards/d_seven.PNG", OSL_IN_RAM, OSL_PF_5551); 
    oslUncacheImage(d_seven);

    d_eight = oslLoadImageFile("/cards/d_eight.PNG", OSL_IN_RAM, OSL_PF_5551); 
    oslUncacheImage(d_eight);

    d_nine = oslLoadImageFile("/cards/d_nine.PNG", OSL_IN_RAM, OSL_PF_5551); 
    oslUncacheImage(d_nine);

    d_ten = oslLoadImageFile("/cards/d_ten.PNG", OSL_IN_RAM, OSL_PF_5551); 
    oslUncacheImage(d_ten);

    d_jack = oslLoadImageFile("/cards/d_jack.PNG", OSL_IN_RAM, OSL_PF_5551); 
    oslUncacheImage(d_jack);

    d_queen = oslLoadImageFile("/cards/d_queen.PNG", OSL_IN_RAM, OSL_PF_5551); 
    oslUncacheImage(d_queen);

    d_king = oslLoadImageFile("/cards/d_king.PNG", OSL_IN_RAM, OSL_PF_5551); 
    oslUncacheImage(d_king);
     //spades

    s_ace = oslLoadImageFile("/cards/s_ace.PNG", OSL_IN_RAM, OSL_PF_5551);    
    oslUncacheImage(s_ace);

    s_two = oslLoadImageFile("/cards/s_two.PNG", OSL_IN_RAM, OSL_PF_5551);   
    oslUncacheImage(s_two);
    
    s_three = oslLoadImageFile("/cards/s_three.PNG", OSL_IN_RAM, OSL_PF_5551);  
    oslUncacheImage(s_three);

    s_four = oslLoadImageFile("/cards/s_four.PNG", OSL_IN_RAM, OSL_PF_5551);   
    oslUncacheImage(s_four);
    
    s_five = oslLoadImageFile("/cards/s_five.PNG", OSL_IN_RAM, OSL_PF_5551);   
    oslUncacheImage(s_five);
    
    s_six = oslLoadImageFile("/cards/s_six.PNG", OSL_IN_RAM, OSL_PF_5551);   
    oslUncacheImage(s_six);

    s_seven = oslLoadImageFile("/cards/s_seven.PNG", OSL_IN_RAM, OSL_PF_5551); 
    oslUncacheImage(s_seven);

    s_eight = oslLoadImageFile("/cards/s_eight.PNG", OSL_IN_RAM, OSL_PF_5551); 
    oslUncacheImage(s_eight);

    s_nine = oslLoadImageFile("/cards/s_nine.PNG", OSL_IN_RAM, OSL_PF_5551); 
    oslUncacheImage(s_nine);

    s_ten = oslLoadImageFile("/cards/s_ten.PNG", OSL_IN_RAM, OSL_PF_5551); 
    oslUncacheImage(s_ten);

    s_jack = oslLoadImageFile("/cards/s_jack.PNG", OSL_IN_RAM, OSL_PF_5551); 
    oslUncacheImage(s_jack);

    s_queen = oslLoadImageFile("/cards/s_queen.PNG", OSL_IN_RAM, OSL_PF_5551); 
    oslUncacheImage(s_queen);

    s_king = oslLoadImageFile("/cards/s_king.PNG", OSL_IN_RAM, OSL_PF_5551); 
    oslUncacheImage(s_king);
}

void pass_cards_out()
{
     int i=0;
     players[ranking[plycnt]].cards[pcrdcnt].value = deck[dcrdcnt].value;
     players[ranking[plycnt]].cards[pcrdcnt].suit = deck[dcrdcnt].suit;
     players[ranking[plycnt]].cards[pcrdcnt].visible = 1;
     plycnt++;
     dcrdcnt++;
     if (dcrdcnt == 54)
     {
        players[ranking[plycnt]].cards[pcrdcnt].value = 0;
        players[ranking[plycnt]].cards[pcrdcnt].suit = '\n';
        players[ranking[plycnt]].cards[pcrdcnt].visible = 1;
        for(i=0;i<5;i++)
        {               if (autosort == 0 && i == 0)
                        { 
                           // don't sort the players card
                        } else 
                        {
                           sortcards(i);
                        }
        }    
        if (plycnt == 5) plycnt = 0;

        if (players[0].cards[usercard].value == 0)
        {
            usercurser+=15;
            usercard++;
        }
        playmode=  trade_wait;            
        return;
     }
     if (plycnt == 5)
     {
            plycnt=0;
            pcrdcnt++;
     }
}

int cardsseled(int player)
{
    int count=0;
    int i=0;
    for (i=0;i< 11;i++)
    {
        if (players[player].cards[i].selected ==1) count++;
    }
    return count;
}

void nosort(int player, int missingcard)
{
     int i=0;
     int tradeval=0;
     char tradesuit='\n';
     
     for (i=0;i<11;i++)
     {
         if (missingcard == i) return ;
         if (players[player].cards[i].value != 0)
         {
             //if (missingcard == i) return ;
             tradeval = players[player].cards[i].value;
             tradesuit = players[player].cards[i].suit;
             players[player].cards[i].value =0;
             players[player].cards[i].suit = '\0';
             players[player].cards[missingcard].value =tradeval;
             players[player].cards[missingcard].suit = tradesuit;             
             break;
             
         }
     }
     
}

void playcards(int player,int cardnum)
{
     /* 
         single card for now
     */
     int i=0;
     int fcount=CountCardsonFlop();
     flopcardcount=0;

     

     
     for (i=0;i<11;i++)
     {
        if (players[player].cards[i].selected == 1)
        {
           rounds[roundcount].flop[floppycount].cards[flopcardcount].value = players[player].cards[i].value;
           rounds[roundcount].flop[floppycount].cards[flopcardcount].suit = players[player].cards[i].suit;
           players[player].cards[i].selected = 0;
           players[player].cards[i].value=0;
           players[player].cards[i].suit ='\0';  
           flopcardcount++; 
           if (cardnum != -1)
           {
               if (cardnum == fcount) break;
           }
        }     
     }
     clearselection2(player);
     
     //rounds[roundcount].flop[floppycount].cards[flopcardcount].value = players[player].cards[cardnum].value;
     //rounds[roundcount].flop[floppycount].cards[flopcardcount].suit = players[player].cards[cardnum].suit;
     //flopcardcount++;
     //players[player].cards[cardnum].selected = 0;
     //players[player].cards[cardnum].value=0;
     //players[player].cards[cardnum].suit ='\0';

     

     clearpass();
     if (chkifgne(player) == 1)
     {
         if (player==0)
         {
             if (isspdupon == 1)
             {
                 playdelay->howlong=1;
             }
         }
         newranking[newrankingcount] = player;
         players[player].ranking= newrankingcount;
         newrankingcount++;
         players[player].passed = 1;
         roundcount++;
         floppycount=-1;
         flopcardcount=0;
         players[player].is_out = 1;

        // players[player].ranking= newrankingcount;
     }
     
     if (player == 0)
     {
         if (autosort ==0) nosort(player, cardnum);
         if (autosort ==1) sortcards(player);
         clearselection();
         if (players[0].cards[usercard].value == 0)
         {
            usercurser+=15;
            usercard++;
         }
     } else {
          sortcards(player);
     }  
     if (chkifgameover() == 1)
     {
        int i=0,j=0;
        for (j=0;j < 5;j++)
        {
            if (players[j].ranking == -1)
            {
                  players[j].ranking = newrankingcount;
                  newranking[newrankingcount] = j;
                  shimuri = false;
                  break;
             }
         }
        
         for (i=0;i<5;i++)
         {
             ranking[i] = newranking[i];
             newranking[i] = -1;
         }
         playmode = game_over;
     } else {
         if (floppycount != -1)
         {
                int i=0;
                joker=0;
                if (revtrigger == 1)
                {
                    revtrigger = 0;
                    playmode = gotrev;
                    return ;
                }
                for (i=0;i<CountCardsonFlop();i++)
                {
                  if (rounds[roundcount].flop[floppycount].cards[i].value == 14) joker++;
                }
                if (joker == CountCardsonFlop())
                {
               
               } else 
               if (joker == 0)
               {
                 
                }  else {
                  playmode = dfnejkp1;
                   return;
                }
            
         }
         
         if (revtrigger == 1)
         {
              revtrigger = 0;
              playmode = gotrev;
              return ;
         }         
         playmode = wait_time;
     }
}     
int shimuricheck(int player,int selectedcard)
{ 
 //one card for now
 if (shimuri == 0) return 0;
 if (floppycount == -1) return 0;
 if (selectedcard != CountCardsonFlop()) return 0;
 int i=0,j=0,smatches=0;;
 
 for (i=0;i< CountCardsonFlop();i++)
 {
      for (j=0;j<11;j++)
      {
          if (players[player].cards[j].selected == 1)
          {
              if ((rounds[roundcount].flop[floppycount].cards[i].suit == players[player].cards[j].suit) || (players[player].cards[j].value == 14))
              {
                  smatches++;
              }
          } 
      }
 }
 if (smatches == CountCardsonFlop()) return 1;
 return 0;

// if (rounds[roundcount].flop[floppycount].cards[flopcardcount].suit   == players[player].cards[selectedcard].suit) return 1;
 //return 0;
}


#endif
