void lcdTime() {
    if (millis() - timeDiff2 > 1000) {   // check switch every second 
        timeDiff2 = millis();           // get current millisecond count
        
        #ifdef LCDSCREEN20x4
        
            if (lcdsegs % 10 != 0) {itoa(lcdsegs%10,PlayBytes,10);lcd.setCursor(19,0);lcd.print(PlayBytes);} // ultima cifra 1,2,3,4,5,6,7,8,9
            else 
               if (lcdsegs % 100 != 0){itoa(lcdsegs%100,PlayBytes,10);lcd.setCursor(18,0);lcd.print(PlayBytes);} // es 10,20,30,40,50,60,70,80,90,110,120,..
               else 
                  if (lcdsegs %1000 != 0) {itoa(lcdsegs%1000,PlayBytes,10);lcd.setCursor(17,0);lcd.print(PlayBytes);} // es 100,200,300,400,500,600,700,800,900,1100,..
                  else {
                  lcd.setCursor(17,0);
                  lcd.print("000");} // es 000,1000,2000,...
           lcdsegs++;
        #endif
        
    }
}
