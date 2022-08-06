#include "Exit.hpp"

UntitledTextEditor::Exit::Exit()
{

}

void UntitledTextEditor::Exit::begin()
{
    beginAutohandle();

}

void UntitledTextEditor::Exit::tick(float deltaTime)
{
    tickAutohandle(deltaTime);

}

void UntitledTextEditor::Exit::end()
{
    endAutohandle();

}

UntitledTextEditor::Exit::~Exit()
{

}

