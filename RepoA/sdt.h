//------------------------------------------------------------------------------
//
// sdt.h
//
// РЈС‡РµР±РЅС‹Р№ Р·Р°РіРѕР»РѕРІРѕС‡РЅС‹Р№ С„Р°Р№Р» РґР»СЏ РєСѓСЂСЃР° "РўРµС…РЅРѕР»РѕРіРёСЏ РїСЂРѕРіСЂР°РјРјРёСЂРѕРІР°РЅРёСЏ" РєР°С„РµРґСЂС‹
// РЈРїСЂР°РІР»РµРЅРёСЏ Рё РёРЅС„РѕСЂРјР°С‚РёРєРё РќРРЈ "РњР­Р". РћСЃРЅРѕРІР°РЅ РЅР° std_lib_facilities.h РєРЅРёРіРё
// "Programming Principles and Practices Using C++, 2nd Edition" Р‘. РЎС‚СЂР°СѓСЃС‚СЂСѓРїР°.
// РљРѕРјРјРµРЅС‚Р°СЂРёРё Рє РѕСЂРёРіРёРЅР°Р»СЊРЅРѕРјСѓ С„Р°Р№Р»Сѓ РїРµСЂРµРјРµС‰РµРЅС‹ РІ РєРѕРЅРµС†.
//
// РЎС‚СѓРґРµРЅС‚Р°Рј:
//     1) Р’ РЅР°С‡Р°Р»Рµ РєСѓСЂСЃР° СЂР°Р·Р±РёСЂР°С‚СЊ Рё РїРѕРЅРёРјР°С‚СЊ СЌС‚РѕС‚ С„Р°Р№Р» РЅРµ РЅСѓР¶РЅРѕ, 
//        Рє РєРѕРЅС†Сѓ РєСѓСЂСЃР° РІС‹ РЅР°СѓС‡РёС‚РµСЃСЊ РѕР±С…РѕРґРёС‚СЊСЃСЏ Р±РµР· РЅРµРіРѕ.
//     2) РЎС‚Р°РЅРґР°СЂС‚РЅС‹Рµ Р·Р°РіРѕР»РѕРІРѕС‡РЅС‹Рµ С„Р°Р№Р»С‹, РєРѕС‚РѕСЂС‹Рµ РїРѕРґРєР»СЋС‡Р°РµС‚ СЌС‚РѕС‚,
//        С…РѕСЂРѕС€Рѕ РѕРїРёСЃР°РЅС‹ РЅР° СЃР°Р№С‚Рµ C++ Reference (http://cppreference.com).
//
//------------------------------------------------------------------------------

#ifndef SOFTWARE_DEVELOPMENT_TECHNOLOGY_H
#define SOFTWARE_DEVELOPMENT_TECHNOLOGY_H 0

#include <iostream>		 // РЎС‚Р°РЅРґР°СЂС‚РЅС‹Р№ РІРІРѕРґ Рё РІС‹РІРѕРґ (cin, cout, getline).
#include <iomanip>		 // Р¤РѕСЂРјР°С‚РёСЂРѕРІР°РЅРёРµ РІРІРѕРґР° Рё РІС‹РІРѕРґР° (setw, setprecision).
#include <fstream>		 // Р¤Р°Р№Р»РѕРІС‹Р№ РІРІРѕРґ Рё РІС‹РІРѕРґ (ifstream, ofstream).
#include <sstream>		 // Р’РІРѕРґ Рё РІС‹РІРѕРґ РІ СЃС‚СЂРѕРєСѓ РІ РїР°РјСЏС‚Рё (i/ostringstream).
#include <cmath>		 // РњР°С‚РµРјР°С‚РёС‡РµСЃРєРёРµ С„СѓРЅРєС†РёРё.
#include <cstdlib>		 // Р’СЃРїРѕРјРѕРіР°С‚РµР»СЊРЅС‹Рµ С„СѓРЅРєС†РёРё (exit).
#include <string>		 // РЎС‚СЂРѕРєРё (string).
#include <list>			 // Р”РІСѓСЃРІСЏР·РЅС‹Р№ СЃРїРёСЃРѕРє (list).
#include <forward_list>  // РћРґРЅРѕСЃРІСЏР·РЅС‹Р№ СЃРїРёСЃРѕРє (forward_list).
#include <vector>		 // Р’РµРєС‚РѕСЂ (vector :-).
#include <map> 			 // РђСЃСЃРѕС†РёР°С‚РёРІРЅС‹Р№ СѓРїРѕСЂСЏРґРѕС‡РµРЅРЅС‹Р№ РјР°СЃСЃРёРІ (map).
#include <unordered_map> // РҐСЌС€-С‚Р°Р±Р»РёС†Р° (unordered_map).
#include <algorithm>	 // РђР»РіРѕСЂРёС‚РјС‹ (find, sort).
#include <array>		 // РњР°СЃСЃРёРІ РІ СЃС‚РёР»Рµ C++ (array).
#include <regex>		 // Р РµРіСѓР»СЏСЂРЅС‹Рµ РІС‹СЂР°Р¶РµРЅРёСЏ (regex_***).
#include <random>		 // Р“РµРЅРµСЂР°С‚РѕСЂС‹ РїСЃРµРІРґРѕСЃР»СѓС‡Р°Р№РЅС‹С… С‡РёСЃРµР».
#include <stdexcept>	 // РЎС‚Р°РЅРґР°СЂС‚РЅС‹Рµ РёСЃРєР»СЋС‡РµРЅРёСЏ (exception, ***_error).

typedef long Unicode;

// РќРёРєРѕРіРґР° РЅРµ СЃР»РµРґСѓРµС‚ С‚Р°Рє РґРµР»Р°С‚СЊ РІ СЂРµР°Р»СЊРЅС‹С… Р·Р°РіРѕР»РѕРІРѕС‡РЅС‹С… С„Р°Р№Р»Р°С…!
using namespace std;

template<class T> string to_string(const T& t)
{
	ostringstream os;
	os << t;
	return os.str();
}

struct Range_error : out_of_range {	// enhanced vector range error reporting
	int index;
	Range_error(int i) :out_of_range("Range error: "+to_string(i)), index(i) { }
};


// trivially range-checked vector (no iterator checking):
template< class T> struct Vector : public std::vector<T> {
	using size_type = typename std::vector<T>::size_type;

#ifdef _MSC_VER
	// microsoft doesn't yet support C++11 inheriting constructors
	Vector() { }
	explicit Vector(size_type n) :std::vector<T>(n) {}
	Vector(size_type n, const T& v) :std::vector<T>(n,v) {}
	template <class I>
	Vector(I first, I last) : std::vector<T>(first, last) {}
	Vector(initializer_list<T> list) : std::vector<T>(list) {}
#else
	using std::vector<T>::vector;	// inheriting constructor
#endif

	T& operator[](unsigned int i) // rather than return at(i);
	{
		if (i<0||this->size()<=i) throw Range_error(i);
		return std::vector<T>::operator[](i);
	}
	const T& operator[](unsigned int i) const
	{
		if (i<0||this->size()<=i) throw Range_error(i);
		return std::vector<T>::operator[](i);
	}
};

// disgusting macro hack to get a range checked vector:
#define vector Vector

// trivially range-checked string (no iterator checking):
struct String : std::string {
	using size_type = std::string::size_type;
//	using string::string;

	char& operator[](unsigned int i) // rather than return at(i);
	{
		if (size()<=i) throw Range_error(i);
		return std::string::operator[](i);
	}

	const char& operator[](unsigned int i) const
	{
		if (size()<=i) throw Range_error(i);
		return std::string::operator[](i);
	}
};


namespace std 
{

template<> struct hash<String>
{
    size_t operator()(const String& s) const
    {
        return hash<std::string>()(s);
    }
};

} // namespace std


struct Exit : runtime_error {
	Exit(): runtime_error("Exit") {}
};

// Р’РѕР·Р±СѓР¶РґР°РµС‚ РёСЃРєР»СЋС‡РµРЅРёРµ runtime_error() СЃ С‚РµРєСЃС‚РѕРј "С„Р°Р№Р»:СЃС‚СЂРѕРєР°: message".
//
// Р­С‚Рѕ РЅРµ С„СѓРЅРєС†РёСЏ, Р° С‚Р°Рє РЅР°Р·С‹РІР°РµРјС‹Р№ РјР°РєСЂРѕСЃ. РџСЂРё РёСЃРїРѕР»СЊР·РѕРІР°РЅРёРё, РЅР°РїСЂРёРјРµСЂ, С‚Р°Рє:
//		error("something happened!");
// РєРѕРјРїРёР»СЏС‚РѕСЂ РїРѕРґСЃС‚Р°РІРёС‚ РЅР° РјРµСЃС‚Рѕ "РІС‹Р·РѕРІР°" РјР°РєСЂРѕСЃР° РєРѕРґ РЅРёР¶Рµ РїРѕРґ #define, РїСЂРёС‡РµРј
// РІРјРµСЃС‚Рѕ message РІ РєРѕРґРµ Р±СѓРґРµС‚ "something happened!", Р° СЃРїРµС†РёР°Р»СЊРЅС‹Рµ РјР°РєСЂРѕСЃС‹
// __FILE__ Рё __LINE__ Р±СѓРґСѓС‚ Р·Р°РјРµРЅРµРЅС‹ РЅР° СЃС‚СЂРѕРєСѓ СЃ РїРѕР»РЅС‹Рј РёРјРµРЅРµРј С„Р°Р№Р»Р° РїСЂРѕРіСЂР°РјРјС‹ 
// Рё СЃС‚СЂРѕРєСѓ РІ РЅРµРј, РѕС‚РєСѓРґР° Р±С‹Р» "РІС‹Р·РІР°РЅ" РјР°РєСЂРѕСЃ error(). РР· __FILE__ РёР·РІР»РµРєР°РµС‚СЃСЏ 
// Р·Р°С‚РµРј РёРјСЏ С„Р°Р№Р»Р° Р±РµР· РїСѓС‚Рё). 
//
// РћР±СЂР°С‚РЅС‹Рµ РєРѕСЃС‹Рµ С‡РµСЂС‚С‹ РІ РєРѕРЅС†Рµ СЃС‚СЂРѕРєРё РїСЂРёРєР°Р·С‹РІР°СЋС‚ РєРѕРјРїРёР»СЏС‚РѕСЂСѓ С‚РѕР»РєРѕРІР°С‚СЊ 
// СЃР»РµРґСѓСЋС‰СѓСЋ СЃС‚СЂРѕРєСѓ РєР°Рє РїСЂРѕРґРѕР»Р¶РµРЅРёРµ РїСЂРµРґС‹РґСѓС‰РµР№ (РєР°Рє РєР»СЋС‡РµРІРѕРµ СЃР»РѕРІРѕ ... 
// РІ MATLAB). Р¦РёРєР» do { } while (0) РЅСѓР¶РµРЅ Р·Р°С‚РµРј, С‡С‚РѕР±С‹ РїРѕСЃР»Рµ "РІС‹Р·РѕРІР°" error() 
// РјРѕР¶РЅРѕ Р±С‹Р»Рѕ РїРѕСЃС‚Р°РІРёС‚СЊ С‚РѕС‡РєСѓ СЃ Р·Р°РїСЏС‚РѕР№; РєСЂРѕРјРµ С‚РѕРіРѕ, РІ С‚РµР»Рµ С†РёРєР»Р° РѕР±СЉСЏРІР»СЏСЋС‚СЃСЏ 
// РІСЂРµРјРµРЅРЅС‹Рµ РїРµСЂРµРјРµРЅРЅС‹Рµ.
//
#define error(message) 														   \
	do 																		   \
	{ 																		   \
		string const path = __FILE__; 										   \
		auto   const last_slash = path.find_last_of('/'); 					   \
		string const name = 												   \
			last_slash != string::npos ? path.substr(last_slash + 1) : path;   \
		string const what = 												   \
			name + ":" + to_string(__LINE__) + ": " + to_string((message));    \
		throw runtime_error(what);	 										   \
	} while (0)


template<class T> char* as_bytes(T& i)	// needed for binary I/O
{
	void* addr = &i;	// get the address of the first byte
						// of memory used to store the object
	return static_cast<char*>(addr); // treat that memory as bytes
}


inline void keep_window_open()
{
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cout << "Press ENTER to exit...\n";
	cin.get();
}

inline void keep_window_open(const string& terminator)
{
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	do
	{
		cout << "Please enter " << terminator << " to exit: ";
		string input;
		cin >> input;
		if (input == terminator)
		{
			return;
		}
	}
	while (true);
}



// error function to be used (only) until error() is introduced in Chapter 5:
inline void simple_error(string s)	// write ``error: s and exit program
{
	cerr << "error: " << s << '\n';
	keep_window_open();		// for some Windows environments
	exit(1);
}

// make std::min() and std::max() accessible on systems with antisocial macros:
#undef min
#undef max


// run-time checked narrowing cast (type conversion). See ???.
template<class R, class A> R narrow_cast(const A& a)
{
	R r = R(a);
	if (A(r)!=a) error(string("info loss"));
	return r;
}

// random number generators. See 24.7.



inline int randint(int min, int max) { static default_random_engine ran; return uniform_int_distribution<>{min, max}(ran); }

inline int randint(int max) { return randint(0, max); }

//inline double sqrt(int x) { return sqrt(double(x)); }	// to match C++0x

// container algorithms. See 21.9.

template<typename C>
using Value_type = typename C::value_type;

template<typename C>
using Iterator = typename C::iterator;

template<typename C>
	// requires Container<C>()
void sort(C& c)
{
	std::sort(c.begin(), c.end());
}

template<typename C, typename Pred>
// requires Container<C>() && Binary_Predicate<Value_type<C>>()
void sort(C& c, Pred p)
{
	std::sort(c.begin(), c.end(), p);
}

template<typename C, typename Val>
	// requires Container<C>() && Equality_comparable<C,Val>()
Iterator<C> find(C& c, Val v)
{
	return std::find(c.begin(), c.end(), v);
}

template<typename C, typename Pred>
// requires Container<C>() && Predicate<Pred,Value_type<C>>()
Iterator<C> find_if(C& c, Pred p)
{
	return std::find_if(c.begin(), c.end(), p);
}

#endif // SOFTWARE_DEVELOPMENT_TECHNOLOGY_H


//------------------------------------------------------------------------------
// РљРѕРјРјРµРЅС‚Р°СЂРёРё Рє РѕСЂРёРіРёРЅР°Р»СЊРЅРѕРјСѓ С„Р°Р№Р»Сѓ std_lib_facilities.h:

/*
   std_lib_facilities.h
*/

/*
	simple "Programming: Principles and Practice using C++ (second edition)" course header to
	be used for the first few weeks.
	It provides the most common standard headers (in the global namespace)
	and minimal exception/error support.

	Students: please don't try to understand the details of headers just yet.
	All will be explained. This header is primarily used so that you don't have
	to understand every concept all at once.

	By Chapter 10, you don't need this file and after Chapter 21, you'll understand it

	Revised April 25, 2010: simple_error() added

	Revised November 25 2013: remove support for pre-C++11 compilers, use C++11: <chrono>
	Revised November 28 2013: add a few container algorithms
	Revised June 8 2014: added #ifndef to workaround Microsoft C++11 weakness
*/