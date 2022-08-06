#include "Open.hpp"

UntitledTextEditor::Open::Open()
{
    name = "test";
    id = 120;
}

void UntitledTextEditor::Open::begin()
{
    beginAutohandle();

}

void UntitledTextEditor::Open::tick(float deltaTime)
{
    tickAutohandle(deltaTime);

}

void UntitledTextEditor::Open::end()
{
    endAutohandle();

}

UntitledTextEditor::Open::~Open()
{

}

