#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator(TargetGenerator const& obj){
	*this = obj;
}

TargetGenerator & TargetGenerator::operator=(TargetGenerator const& rhs){
	_targetList = rhs._targetList;
	return(*this);
}

TargetGenerator::TargetGenerator(){}

TargetGenerator::~TargetGenerator(){
	_targetList.clear();
}

void TargetGenerator::learnTargetType(ATarget* target){
	if(target){
		_targetList[target->getType()] = target->clone();
	}
}

void TargetGenerator::forgetTargetType(std::string const & targetType){
	if( _targetList.find(targetType) != _targetList.end() ){
		_targetList.erase(_targetList.find(targetType));
	}
}

ATarget* TargetGenerator::createTarget(std::string const & targetType){
	ATarget* tmp = NULL;
	if (_targetList.find(targetType) != _targetList.end()){
		tmp = _targetList[targetType];
	}
	return(tmp);
}