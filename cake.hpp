class Cake
{
public:
	Cake(); //Constructor
	~Cake(); //Destructor
	bool EatSlice();
	int GetSlices();
private:
	int iSlices;
	bool bPlate;
};
