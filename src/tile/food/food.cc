#include "food.h"

Food::Food(){}
Food::~Food(){}

void Food::setColor(const Cairo::RefPtr<Cairo::Context> &cr){
    cr->set_source_rgb(0.0, 0.8, 0.0);
}