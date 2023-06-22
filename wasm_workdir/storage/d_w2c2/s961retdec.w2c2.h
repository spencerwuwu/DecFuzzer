#ifndef s961retdec_H
#define s961retdec_H

#include "w2c2_base.h"

typedef struct s961retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s961retdecInstance;

void f0(s961retdecInstance*);

void f1(s961retdecInstance*);

U32 f2(s961retdecInstance*);

void f3(s961retdecInstance*,U32);

U32 f4(s961retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s961retdecInstance*,U32,U32,U32,U32,U32);

void f6(s961retdecInstance*,U32);

void f7(s961retdecInstance*,U32,U32,U32);

void f8(s961retdecInstance*,U32,U32,U32);

void s961retdec____wasm_call_ctors(s961retdecInstance*i);

void s961retdec____wasm_apply_data_relocs(s961retdecInstance*i);

U32 s961retdec_func_1(s961retdecInstance*i);

void s961retdec_call_cb(s961retdecInstance*i,U32 l0);

void s961retdecInstantiate(s961retdecInstance* instance, void* resolve(const char* module, const char* name));

void s961retdecFreeInstance(s961retdecInstance* instance);

#endif /* s961retdec_H */

