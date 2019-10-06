#pragma once

class SuperSonicRadar {
public:
	SuperSonicRadar();
	virtual ~SuperSonicRadar();

	int GetDistancemap();
private:
	void CalcDistance();

};