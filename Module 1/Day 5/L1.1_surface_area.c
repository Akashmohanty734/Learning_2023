#include <stdio.h>

struct Box {
    float length;
    float width;
    float height;
};

float calculateVolume(struct Box* box) {
    return box->length * box->width * box->height;
}

float calculateSurfaceArea(struct Box* box) {
    return 2 * (box->length * box->width + box->length * box->height + box->width * box->height);
}

int main() {
    struct Box box;
    struct Box* boxPtr = &box;

    printf("Enter the dimensions of the box:\n");
    printf("Length: ");
    scanf("%f", &(boxPtr->length));
    printf("Width: ");
    scanf("%f", &(boxPtr->width));
    printf("Height: ");
    scanf("%f", &(boxPtr->height));

    float volume = calculateVolume(boxPtr);
    float surfaceArea = calculateSurfaceArea(boxPtr);

    printf("\n");
    printf("Box Dimensions:\n");
    printf("Length: %.2f\n", boxPtr->length);
    printf("Width: %.2f\n", boxPtr->width);
    printf("Height: %.2f\n", boxPtr->height);
    printf("\n");
    printf("Volume: %.2f\n", volume);
    printf("Surface Area: %.2f\n", surfaceArea);

    return 0;
}
