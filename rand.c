// Random number generators that proximate those used in TBG

int
rand_exp (double scale)
{
  unsigned int r = random ();
  int i;
  int m = 1;

  for (i = 0 ; i < 32  && (r & (1 << i)); i++)
    m *= 2;
  return dice(m*scale);
}


#define HOST_SCALE      ((RAND_MAX >> 15) + 1)
int     dice(int scale)
{
        return(((rand()/HOST_SCALE) * scale) >> 15);
}


