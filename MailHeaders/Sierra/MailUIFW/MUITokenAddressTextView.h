//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTokenTextView.h"

@class MUIAddressField;

@interface MUITokenAddressTextView : NSTokenTextView
{
    MUIAddressField *_addressField;	// 160 = 0xa0
}

@property(nonatomic) __weak MUIAddressField *addressField; // @synthesize addressField=_addressField;
- (void).cxx_destruct;	// IMP=0x0000000000020fa5
- (void)mouseUp:(id)arg1;	// IMP=0x0000000000020ecb
- (void)mouseDown:(id)arg1;	// IMP=0x0000000000020e1e
- (void)noteFocusRingMaskChanged;	// IMP=0x0000000000020dc2
- (id)designatedFocusRingView;	// IMP=0x0000000000020db0
- (BOOL)performDragOperation:(id)arg1;	// IMP=0x0000000000020d02
- (void)_muiTokenAddressTextViewCommonInit;	// IMP=0x0000000000020c99
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000020c54
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000020bec

@end
