void Counter1() {
  #ifdef LCDSCREEN20x4            
                                         
              itoa(newpct,PlayBytes,10);
              strcat_P(PlayBytes,PSTR("% / "));
              lcd.setCursor(12,0);
              lcd.print(PlayBytes);
              //sprintf(PlayBytes,"%03d",lcdsegs%1000);lcd.setCursor(13,0);lcd.print(PlayBytes);
              strcpy(PlayBytes,"000");
              if ((lcdsegs %1000) <10) itoa(lcdsegs%10,PlayBytes+2,10);
              else 
                 if ((lcdsegs %1000) <100)itoa(lcdsegs%1000,PlayBytes+1,10);
                 else 
                    itoa(lcdsegs%1000,PlayBytes,10);
                                
              lcd.setCursor(17,0);
              lcd.print(PlayBytes); 
              
            #endif 
}

void Counter2()    {

  #ifdef LCDSCREEN20x4  
      lcd.setCursor(11,0);
      lcd.print(newpct);
      lcd.print("% / ");           
  #endif

}
