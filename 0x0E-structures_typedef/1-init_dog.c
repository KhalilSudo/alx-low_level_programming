/**
* init_dog - function that int value information of a dog
* @name: name of the dog
* @age: age of the dog
* @owner: owner of the dog
* @d: pointer to struct dog
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if(d){
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
	
}
