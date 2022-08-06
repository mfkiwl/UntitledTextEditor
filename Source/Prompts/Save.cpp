#include "Save.hpp"

UntitledTextEditor::Save::Save()
{

}

void UntitledTextEditor::Save::begin()
{
    beginAutohandle();

}

void UntitledTextEditor::Save::tick(float deltaTime)
{
    tickAutohandle(deltaTime);

}

void UntitledTextEditor::Save::end()
{
    endAutohandle();

}

UntitledTextEditor::Save::~Save()
{

}

