//
// Generated by eBay Common SDK Platform, DO NOT CHANGE!
//

#import <Foundation/Foundation.h>
#import "EbayNs_ClassSchema.h"
#import "EbayNs_PropertySchema.h"
#import "EbayNs_BindingConstant.h"
#import "EbayNs_Bindable.h"



/**
 
 User data related to notifications. Note that SMS is currently reserved for future use.
 
 
 @ingroup Trading
*/
@interface Trading_SMSSubscriptionType : NSObject <EbayNs_Bindable> {

@private
    NSString *smsPhone;
    NSString *userStatus;
    NSString *carrierID;
    NSString *errorCode;
    NSString *itemToUnsubscribe;

}


/**
 
 The wireless phone number to be used for receiving SMS messages.
 Max length of phone number varies by country.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *smsPhone;

/**
 
 Registered/Unregistered/Pending.
 
 
 type: string constant in Trading_SMSSubscriptionUserStatusCodeType.h
*/
@property (nonatomic, retain) NSString *userStatus;

/**
 
 The wireless carrier ID.
 
 
 type: string constant in Trading_WirelessCarrierIDCodeType.h
*/
@property (nonatomic, retain) NSString *carrierID;

/**
 
 Reason for SMS subscription error (postback from thired-party integrator).
 
 
 type: string constant in Trading_SMSSubscriptionErrorCodeCodeType.h
*/
@property (nonatomic, retain) NSString *errorCode;

/**
 
 ID of item to unsubscribe from SMS notification.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *itemToUnsubscribe;



@end
