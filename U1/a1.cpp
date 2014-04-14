# include < cmath >
# include < UnitTest ++. h >
// # include < unittest ++/ UnitTest ++. h > // for ubuntu
unsigned factorial ( unsigned n );
SUITE ( de sc ri be_factorial )
{
TEST ( f a c t o r i a l _ o f _ z e r o _ s h o u l d _ b e _ 1 )
{
CHECK_EQUAL (1 , factorial (0));
}
TEST ( f a c t o r i a l _ o f _ 4 _ s h o u l d _ b e _ 2 4 )
{
CHECK_EQUAL (24 , factorial (4));
}
}
int
main ()
{
return UnitTest :: RunAllTests ();
}

