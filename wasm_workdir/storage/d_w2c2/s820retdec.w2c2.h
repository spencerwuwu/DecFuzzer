#ifndef s820retdec_H
#define s820retdec_H

#include "w2c2_base.h"

typedef struct s820retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s820retdecInstance;

void f0(s820retdecInstance*);

void f1(s820retdecInstance*);

U32 f2(s820retdecInstance*);

void f3(s820retdecInstance*,U32);

U32 f4(s820retdecInstance*,U32,U32,U32);

void f5(s820retdecInstance*,U32,U32,U32,U32,U32);

void f6(s820retdecInstance*,U32);

void f7(s820retdecInstance*,U32,U32,U32);

void f8(s820retdecInstance*,U32,U32,U32);

void s820retdec____wasm_call_ctors(s820retdecInstance*i);

void s820retdec____wasm_apply_data_relocs(s820retdecInstance*i);

U32 s820retdec_func_1(s820retdecInstance*i);

void s820retdec_call_cb(s820retdecInstance*i,U32 l0);

void s820retdecInstantiate(s820retdecInstance* instance, void* resolve(const char* module, const char* name));

void s820retdecFreeInstance(s820retdecInstance* instance);

#endif /* s820retdec_H */

