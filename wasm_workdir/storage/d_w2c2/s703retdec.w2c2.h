#ifndef s703retdec_H
#define s703retdec_H

#include "w2c2_base.h"

typedef struct s703retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s703retdecInstance;

void f0(s703retdecInstance*);

void f1(s703retdecInstance*);

U32 f2(s703retdecInstance*);

void f3(s703retdecInstance*,U32);

void f4(s703retdecInstance*,U32);

void s703retdec____wasm_call_ctors(s703retdecInstance*i);

void s703retdec____wasm_apply_data_relocs(s703retdecInstance*i);

U32 s703retdec_func_1(s703retdecInstance*i);

void s703retdec_call_cb(s703retdecInstance*i,U32 l0);

void s703retdecInstantiate(s703retdecInstance* instance, void* resolve(const char* module, const char* name));

void s703retdecFreeInstance(s703retdecInstance* instance);

#endif /* s703retdec_H */

