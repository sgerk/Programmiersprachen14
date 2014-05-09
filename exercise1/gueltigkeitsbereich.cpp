# include < iostream >

double sum ( double a , double b )
{
	return a + b ;
}
int square ( int i )
{
	return i * i ;
}
int main ()
{
	for ( int i = 0; i != 100; ++ i ) {
	std :: cout << " i ^2 = " << square ( i ) << std :: endl ;
	std :: cout << " i + i = " << sum (i , i ) << std :: endl ;
	}
return 0;
}