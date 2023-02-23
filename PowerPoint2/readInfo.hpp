#ifndef __READ__INFO__HPP__
#define __READ__INFO__HPP__

#include <fstream>
#include <iostream>
#include <string>
#include <sstream>

#include "PowerPoint.hpp"

class IBaseComponents{
public:
	virtual void GetData() = 0;
	virtual void ReadParseData() = 0;
	virtual void ParseLine(std::stringstream&) = 0;
	virtual ~IBaseComponents() = default;
private:
};

class Administrator : public IBaseComponents{
public:
	void GetData() override;
	void ReadParseData() override;
	static Administrator& GetInstance();
	Administrator& operator=(const Administrator& rhs) = delete;
	Administrator(const Administrator& rhs) = delete;
	virtual ~Administrator() = default;
	Administrator();
private:
	void ParseLine(std::stringstream&) override;
private:
	const std::string m_FPath;
	std::fstream m_file;
};

#include "readInfo.impl.cpp"

#endif // __READ__INFO__HPP__
