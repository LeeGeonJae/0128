#include <iostream>
#include <vector>

using namespace std;

class AActor
{
public:
	AActor()
	{
		cout << "AActor Consturctor" << endl;
	}
	virtual ~AActor()
	{
		cout << "AActor Destructor" << endl;
	}

	virtual void Tick()
	{
		cout << "AActor Tick();" << endl;
	}

	int Gold = 10;
};

class ACubeActor : public AActor
{
public:
	ACubeActor()
	{
		cout << "ACubeActor Consturctor" << endl;
	}
	virtual ~ACubeActor()
	{
		cout << "ACubeActor Destructor" << endl;
	}

	virtual void Tick() override
	{
		cout << "ACubeActor Tick();" << endl;
	}

};

class AFloor : public ACubeActor
{
public:
	AFloor()
	{
		cout << "AFloor Consturctor" << endl;
	}
	virtual ~AFloor()
	{
		cout << "AFloor Destructor" << endl;
	}
	virtual void Tick() override
	{
		cout << "AFloor Tick();" << endl;
	}
};

class MyEngine
{
public:
	MyEngine() {}
	virtual ~MyEngine() {}

	void SpawnActor(AActor* MakeAcotr)
	{
		ActorList.push_back(MakeAcotr);
	}
	void DestoryActor(AActor* DestroyedActor)
	{
		for (auto iter = ActorList.begin(); iter != ActorList.end(); ++iter)
		{
			if (*iter == DestroyedActor)
			{
				ActorList.erase(iter);
			}
		}

		ActorList.erase(find(ActorList.begin(), ActorList.end(), DestroyedActor));
	}

private:
	vector<AActor*> ActorList;
};


int main()
{
	AActor* object = new AFloor();

	object->Tick();

	delete object;
	object = nullptr;

	return 0;
}