// Range.hpp
//
// A class that represents a closed interval [low, high]. This is
// needed in many applications, for example candlestick charts in 
// financial futures.
//
// (C) Datasim Education BV 2003-2006

#ifndef BA14234B_2EE9_4A86_AA65_620EA9F06A6C
#define BA14234B_2EE9_4A86_AA65_620EA9F06A6C

#include "Vector.hpp"

#ifndef Range_HPP
#define Range_HPP

template <class Type> class Range
{

private:

	Type lo;
	Type hi;

public:
	// Constructors
	Range();									// Default constructor
	Range(const Type& low, const Type& high);	// Low and high value
	Range(const Range<Type>& ran2);				// Copy constructor

	// Destructor
	virtual ~Range();

	// Modifier functions
	void low(const Type& t1);					// Sets the low value of current range
	void high(const Type& t1);					// Sets the high value of current range

	//Accessing functions
	Type low() const;							// Lowest value in range
	Type high() const;							// Highest value in the range

	Type spread() const;						// High - Low value

	// Boolean functions
	bool left(const Type& value) const;			// Is the value to the left of the range?
	bool right(const Type& value) const;		// Is the value to the right of the range?
	bool contains(const Type& value) const;		// Does range contain value?
	
	// Utility functions
    Vector<Type, long> mesh(long nSteps) const;	// Create a discrete mesh

	// Operator overloading
	Range<Type>& operator = (const Range<Type>& ran2);

};


#endif


#endif /* BA14234B_2EE9_4A86_AA65_620EA9F06A6C */
