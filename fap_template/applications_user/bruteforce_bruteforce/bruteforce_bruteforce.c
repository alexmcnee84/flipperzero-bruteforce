#include <furi.h>
#include <dialogs/dialogs.h>

int32_t bruteforce_bruteforce_app(void* context) {
    UNUSED(context);

    DialogsApp* dialogs = furi_record_open(RECORD_DIALOGS);
    DialogMessage* message = dialog_message_alloc();

    dialog_message_set_header(message, "Bruteforce Files");
    dialog_message_set_text(
        message,
        "Copy the generated\\n.sub files to SD:/subghz\\nand play them via Sub-GHz",
        4,
        20,
        AlignLeft,
        AlignTop);

    dialog_message_show(dialogs, message);

    dialog_message_free(message);
    furi_record_close(RECORD_DIALOGS);

    return 0;
}
