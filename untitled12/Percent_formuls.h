#pragma once



inline double Sum_and_Perc(const double sum, const double perc)
{
    return sum*perc/100;
}

inline double Sum_and_Part(const double sum, const double part)
{
      return part/sum*100;
}

inline double Perc_and_Part(const double perc, const double part)
{
      return part*100/perc;
}

