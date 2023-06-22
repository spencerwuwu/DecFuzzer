#ifndef s705retdec_H
#define s705retdec_H

#include "w2c2_base.h"

typedef struct s705retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s705retdecInstance;

void f0(s705retdecInstance*);

void f1(s705retdecInstance*);

U32 f2(s705retdecInstance*);

void f3(s705retdecInstance*,U32);

U32 f4(s705retdecInstance*,U32,U32,U32);

void f5(s705retdecInstance*,U32,U32,U32,U32,U32);

void f6(s705retdecInstance*,U32);

void f7(s705retdecInstance*,U32,U32,U32);

void f8(s705retdecInstance*,U32,U32,U32);

void s705retdec____wasm_call_ctors(s705retdecInstance*i);

void s705retdec____wasm_apply_data_relocs(s705retdecInstance*i);

U32 s705retdec_func_1(s705retdecInstance*i);

void s705retdec_call_cb(s705retdecInstance*i,U32 l0);

void s705retdecInstantiate(s705retdecInstance* instance, void* resolve(const char* module, const char* name));

void s705retdecFreeInstance(s705retdecInstance* instance);

#endif /* s705retdec_H */

