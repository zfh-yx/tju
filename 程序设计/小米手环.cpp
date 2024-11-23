class SportRun: public Sport
{
	public:
    SportRun(int m, int l): Sport(m, l){}
    string getDescription() override
	{
        string min = to_string(minutes);
        return "You're running for " + min + " minute(s)";
    }
    int getSportIntensity() override 
	{
        return (minutes/10) * level;
    }
};//子类 SportRun
 
class SportBicycle: public Sport
{
	public:
    SportBicycle(int m, int l): Sport(m, l){}
    string getDescription() override 
	{
        string min = to_string(minutes);
        return "You're riding for " + min + " minute(s)";
    }
    int getSportIntensity() override 
	{
        return (minutes/5) * (minutes/5) * level;
    }
}; //子类 SportBicycle
