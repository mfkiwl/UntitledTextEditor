#include "Terminal.hpp"

UntitledTextEditor::Terminal::Terminal()
{

}

void UntitledTextEditor::Terminal::begin()
{
    beginAutohandle();

}

void UntitledTextEditor::Terminal::tick(float deltaTime)
{
    tickAutohandle(deltaTime);

}

void UntitledTextEditor::Terminal::end()
{
    endAutohandle();

}

UntitledTextEditor::Terminal::~Terminal()
{

}

