void getColor()
{  
  readRGB();
  
        if (red >= 3 && red <= 6 && grn >= 4 && grn <= 7 && blu >= 3 && blu <= 6) color = "WHITE";
  else if (red >= 30 && red <= 37 && grn >= 38 && grn <= 45 && blu >= 30 && blu <= 37) color = "BLACK";
  else if (red >= 5 && red <= 9 && grn >= 15 && grn <= 20 && blu >= 13 && blu <= 17) color = "RED";
  else if (red >= 12 && red <= 16 && grn >= 14 && grn <= 18 && blu >= 12 && blu <= 16) color = "GREEN";
  else if (red >= 4 && red <= 9 && grn >= 7 && grn <= 10 && blu >= 9 && blu <= 15) color = "YELLOW";
  else if (red >= 10 && red <= 17 && grn >= 13 && grn <= 18 && blu >= 7 && blu <= 10) color = "BLUE";
  else  color = "NO_COLOR";
}

/* read RGB components */
void readRGB() 
{
  red = 0;
  grn = 0;
  blu = 0;
  int n = 10;
  for (int i = 0; i < n; ++i)
  {
    //read red component
    digitalWrite(s2, LOW);
    digitalWrite(s3, LOW);
    red = red + pulseIn(outPin, LOW);
  
   //read green component
    digitalWrite(s2, HIGH);
    digitalWrite(s3, HIGH);
    grn = grn + pulseIn(outPin, LOW);
    
   //let's read blue component
    digitalWrite(s2, LOW);
    digitalWrite(s3, HIGH);
    blu = blu + pulseIn(outPin, LOW);
  }
  red = red/n;
  grn = grn/n;
  blu = blu/n;
}
