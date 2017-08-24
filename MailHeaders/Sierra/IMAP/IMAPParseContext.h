//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject.h"

@class IMAPConnection, IMAPResponse, NSData;

@interface IMAPParseContext : NSObject
{
    const char *_start;	// 8 = 0x8
    const char *_end;	// 16 = 0x10
    BOOL _invalid;	// 24 = 0x18
    IMAPConnection *_connection;	// 32 = 0x20
    IMAPResponse *_response;	// 40 = 0x28
    NSData *_data;	// 48 = 0x30
}

@property(nonatomic) BOOL invalid; // @synthesize invalid=_invalid;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(retain, nonatomic) IMAPResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) IMAPConnection *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;	// IMP=0x00000000000518fb
- (id)_newBodystructure;	// IMP=0x000000000005180c
- (id)_newArrayAllowingNulls:(BOOL)arg1;	// IMP=0x00000000000515a8
- (id)_newNamespaceExtension;	// IMP=0x0000000000051392
- (id)_newNamespace;	// IMP=0x0000000000051001
- (id)_newBodyData:(BOOL)arg1;	// IMP=0x0000000000050eeb
- (id)_newFlagsSet;	// IMP=0x0000000000050bf1
- (id)_newIDDictionary;	// IMP=0x00000000000509ab
- (BOOL)_rangeWithoutStar:(struct _NSRange *)arg1;	// IMP=0x00000000000508bd
- (id)_newMessageSetWithoutStar;	// IMP=0x00000000000507a7
- (id)_newStatusAttList;	// IMP=0x00000000000504b1
- (id)_newCapabilityArray;	// IMP=0x00000000000503f1
- (id)_newArray;	// IMP=0x00000000000503dd
- (id)_newMailboxWithSeparatorChar:(id)arg1;	// IMP=0x0000000000050298
- (id)_newAsString;	// IMP=0x000000000005025c
- (id)_newLiteral;	// IMP=0x000000000004fd68
- (id)_newLiteralStringUsingCaseOption:(long long)arg1;	// IMP=0x000000000004fb50
- (id)_newModificationSequenceValue;	// IMP=0x000000000004fb01
- (BOOL)_modificationSequenceValue:(unsigned long long *)arg1;	// IMP=0x000000000004fa01
- (id)_newNumber;	// IMP=0x000000000004f9b4
- (BOOL)_number:(unsigned int *)arg1;	// IMP=0x000000000004f8bc
- (id)_newNstring;	// IMP=0x000000000004f810
- (id)_newStringUsingCaseOption:(long long)arg1;	// IMP=0x000000000004f7d5
- (id)_newQuotedStringUsingCaseOption:(long long)arg1;	// IMP=0x000000000004f2e9
- (id)_newStringWithSingleQuotedCharacter;	// IMP=0x000000000004f205
- (id)_newIMAPAtom:(long long)arg1;	// IMP=0x000000000004effd
- (BOOL)_consumeSpaces;	// IMP=0x000000000004ef96
- (void)_parseError:(id)arg1;	// IMP=0x000000000004ecba
- (void)_parseWarning:(id)arg1;	// IMP=0x000000000004eb42
- (void)_parseVanishedResponse;	// IMP=0x000000000004e8f4
- (void)_parseStatusResponse;	// IMP=0x000000000004e428
- (void)_parseSearchResponse;	// IMP=0x000000000004e1f4
- (void)_parseQuotaRootResponse;	// IMP=0x000000000004df58
- (void)_parseQuotaResponse;	// IMP=0x000000000004dac6
- (void)_parseOtherResponse;	// IMP=0x000000000004d79b
- (void)_parseNamespaceResponse;	// IMP=0x000000000004d38c
- (void)_parseListResponse;	// IMP=0x000000000004d0c4
- (void)_parseIDResponse;	// IMP=0x000000000004d031
- (void)_parseFlagsResponse;	// IMP=0x000000000004ce66
- (void)_parseFetchResponse;	// IMP=0x000000000004bbb3
- (void)_parseEnabledResponse;	// IMP=0x000000000004b9f9
- (void)_parseCapabilityResponse;	// IMP=0x000000000004b859
- (void)_parseBasicResponse;	// IMP=0x000000000004a0aa
- (void)_createResponseUsingMask:(unsigned long long)arg1;	// IMP=0x00000000000499e4
- (void)_createResponseWithoutTag:(BOOL)arg1;	// IMP=0x00000000000498c4
- (id)parseIntoResponse;	// IMP=0x00000000000496c6
- (id)description;	// IMP=0x00000000000495c6
- (id)debugDescription;	// IMP=0x0000000000049494
- (id)init;	// IMP=0x00000000000493c5
- (id)initWithConnection:(id)arg1 data:(id)arg2;	// IMP=0x00000000000492c1

@end
