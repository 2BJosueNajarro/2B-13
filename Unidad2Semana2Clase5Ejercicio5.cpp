# incluir  < iostream >
utilizando el espacio de  nombres  estándar ;

larga  potenciaDe ( int base, int exponente);

int  principal (){
	int base, exponente;
	resultado largo ;
	cout<< " Ingresa la base: " ; cin>>base;
	cout<< " Ingresa el exponente: " ; cin>>exponente;
	resultado = potenciaDe (base,exponente);
	cout<< " El resultado es:   " <<resultado<<endl;
	devolver  0 ;
}

long  potenciaDe ( int base, int exponente){
	si (exponente != 1 ){
		return base * potenciaDe (base, exponente - 1 );
	} más {
		base de retorno ;
	}
}
