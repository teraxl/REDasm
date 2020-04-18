#pragma once

#include <QSplitter>
#include <rdapi/rdapi.h>
#include "disassemblercolumnview.h"
#include "disassemblertextview.h"

class DisassemblerListingView : public QSplitter
{
    Q_OBJECT

    public:
        explicit DisassemblerListingView(QWidget *parent = nullptr);
        ~DisassemblerListingView();
        DisassemblerColumnView* columnView();
        DisassemblerTextView* textView();
        void setDisassembler(RDDisassembler* disassembler);

    private:
        RDDisassembler* m_disassembler;
        DisassemblerColumnView* m_disassemblercolumnview;
        DisassemblerTextView* m_disassemblertextview;
};
