//
// Generated by eBay Common SDK Platform, DO NOT CHANGE!
//

#import <Foundation/Foundation.h>
#import "EbayNs_ClassSchema.h"
#import "EbayNs_PropertySchema.h"
#import "EbayNs_BindingConstant.h"
#import "EbayNs_Bindable.h"


@class Shopping_SellingStatusType;
@class Shopping_AmountType;
@class Shopping_NameValueListArrayType;

/**
 
 This element hold the values that define the SKU, StartPrice, Quantity, VariationDetails, and VariationSpecifics.
 
 
 @ingroup Shopping
*/
@interface Shopping_VariationType : NSObject <EbayNs_Bindable> {

@private
    NSString *sku;
    Shopping_AmountType *startPrice;
    NSNumber *quantity;
    Shopping_NameValueListArrayType *variationSpecifics;
    NSNumber *quantitySold;
    Shopping_SellingStatusType *sellingStatus;

}


/**
 
 An SKU (stock keeping unit) is an identifier defined by a seller.
 If you need to contact the seller to ask a question about a 
 particular variation, you can mention the SKU (if present) to help 
 the seller identify the variation you're interested in. 
 Only returned if the seller chose to specify a SKU for the 
 variation.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *sku;

/**
 
 The fixed price of all items identified by this variation. 
 For example, a "Blue, Large" variation price could be USD 10.00,
 and a "Black, Medium" variation price could be USD 5.00.
 <br>
 <br>
 Each variation has its own price, and the prices can 
 be different for each variation. This enables sellers to 
 provide discounts on certain variations without affecting the price 
 of others. Always returned) for multi-variation listings.
 
 
 type : class Shopping_AmountType
*/
@property (nonatomic, retain) Shopping_AmountType *startPrice;

/**
 
 The number of items available for sale that are associated 
 with this variation.
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *quantity;

/**
 
 A list of name/value pairs that uniquely identify the variation 
 within the listing. All variations specify the same set of 
 names, and each variation provides a unique combination of 
 values for those names. For example, if the items vary by color and 
 size, then every variation specifies Color and Size as names, 
 and no two variations can specify the same combination of 
 color and size values. Use this information to identify a 
 variation of interest when you communicate with
 the seller.
 <br>
 <br>
 If your application supports PlaceOffer (in the Trading API),
 you use this information to uniquely identify the variation
 that you want to purchase.
 
 
 type : class Shopping_NameValueListArrayType
*/
@property (nonatomic, retain) Shopping_NameValueListArrayType *variationSpecifics;

/**
 
 Not used. See SellingStatus.QuantitySold instead.
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *quantitySold;

/**
 
 Contains the variation's current price and quantity sold. 
 Always returned when variations are present.
 
 
 type : class Shopping_SellingStatusType
*/
@property (nonatomic, retain) Shopping_SellingStatusType *sellingStatus;



@end