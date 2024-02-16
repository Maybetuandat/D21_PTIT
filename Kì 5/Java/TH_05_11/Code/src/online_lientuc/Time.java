/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package online_lientuc;

import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Date;

/**
 *
 * @author Dell Gaming
 */
class Time  implements Comparable<Time>{
         private String name, timestart, timeend;
         private long timeonline;

    public Time(String name, String timestart, String timeend) throws ParseException {
        this.name = name;
        this.timestart = timestart;
        this.timeend = timeend;
        xuli();
    
    }
    private void xuli() throws ParseException
    {
      SimpleDateFormat dfm = new SimpleDateFormat("dd/MM/yyyy HH:mm:ss");
      Date date1 = dfm.parse(timestart);
      Date date2 = dfm.parse(timeend);
      timeonline = (date2.getTime() - date1.getTime()) / (60 * 1000);
    }

    public String toString()
    {
        return name + " " + timeonline;
    }
    @Override
    public int compareTo(Time o) {
          if(o.timeonline ==  timeonline)
              return name.compareTo(o.name);
          return (int)(o.timeonline - timeonline);
    }
    
}
