
int   c[2];
int   returnv;
pid_t id;

pipe(c);
pid = fork()) == 0
if (pid)
{
  dup2(c[1], 0);
  close(p[1]);
  close(p[1]);
  execvp(array(0), array);
}

if ((pid = fork()) == 0)
{
  dup2(p[0], 1);
  close(p(0));
  close(p[0]);
  returnv = execvp(array[0], array);
}

close(p[1]);
wait(NULL);
wait(NULL);
wait(NULL);
return returnv;
