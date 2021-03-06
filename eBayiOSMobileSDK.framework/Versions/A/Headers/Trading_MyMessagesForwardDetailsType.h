//
// Generated by eBay Common SDK Platform, DO NOT CHANGE!
//

#import <Foundation/Foundation.h>
#import "EbayNs_ClassSchema.h"
#import "EbayNs_PropertySchema.h"
#import "EbayNs_BindingConstant.h"
#import "EbayNs_Bindable.h"



/**
 
 Details relating to the forwarding of a message.
 
 
 @ingroup Trading
*/
@interface Trading_MyMessagesForwardDetailsType : NSObject <EbayNs_Bindable> {

@private
    NSDate *userForwardDate;
    NSString *forwardMessageEncoding;

}


/**
 
 The date and time a user forwarded a message.
 
 
 type : NSDate, wrapper for primitive date
*/
@property (nonatomic, retain) NSDate *userForwardDate;

/**
 
 Encoding used to forward a message.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *forwardMessageEncoding;



@end
