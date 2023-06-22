#ifndef s761retdec_H
#define s761retdec_H

#include "w2c2_base.h"

typedef struct s761retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s761retdecInstance;

void f0(s761retdecInstance*);

void f1(s761retdecInstance*);

U32 f2(s761retdecInstance*);

void f3(s761retdecInstance*,U32);

U32 f4(s761retdecInstance*,U32,U32,U32,U32,U32);

void f5(s761retdecInstance*,U32,U32,U32,U32,U32);

void f6(s761retdecInstance*,U32);

void f7(s761retdecInstance*,U32,U32,U32);

void f8(s761retdecInstance*,U32,U32,U32);

void s761retdec____wasm_call_ctors(s761retdecInstance*i);

void s761retdec____wasm_apply_data_relocs(s761retdecInstance*i);

U32 s761retdec_func_1(s761retdecInstance*i);

void s761retdec_call_cb(s761retdecInstance*i,U32 l0);

void s761retdecInstantiate(s761retdecInstance* instance, void* resolve(const char* module, const char* name));

void s761retdecFreeInstance(s761retdecInstance* instance);

#endif /* s761retdec_H */

