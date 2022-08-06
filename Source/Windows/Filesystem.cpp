#include "Filesystem.hpp"

UntitledTextEditor::Filesystem::Filesystem()
{

}

void UntitledTextEditor::Filesystem::begin()
{
    beginAutohandle();

}

void UntitledTextEditor::Filesystem::tick(float deltaTime)
{
    tickAutohandle(deltaTime);

}

void UntitledTextEditor::Filesystem::end()
{
    endAutohandle();

}

UntitledTextEditor::Filesystem::~Filesystem()
{

}

