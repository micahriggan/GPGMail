/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <Mail/MFMessageSortingValue.h>

@class MFMailbox;

@interface _MFMessageSortingValueMailbox : MFMessageSortingValue
{
    MFMailbox *_mailbox;
}

@property(retain, nonatomic) MFMailbox *mailbox; // @synthesize mailbox=_mailbox;
- (id)description;
- (void)dealloc;

@end
