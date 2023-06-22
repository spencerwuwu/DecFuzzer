#ifndef s70r2_H
#define s70r2_H

#include "w2c2_base.h"

typedef struct s70r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s70r2Instance;

void f0(s70r2Instance*);

void f1(s70r2Instance*);

U32 f2(s70r2Instance*);

void f3(s70r2Instance*,U32);

U32 f4(s70r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s70r2Instance*,U32,U32,U32,U32,U32);

void f6(s70r2Instance*,U32);

void f7(s70r2Instance*,U32,U32,U32);

void f8(s70r2Instance*,U32,U32,U32);

void s70r2____wasm_call_ctors(s70r2Instance*i);

void s70r2____wasm_apply_data_relocs(s70r2Instance*i);

U32 s70r2_func_1(s70r2Instance*i);

void s70r2_call_cb(s70r2Instance*i,U32 l0);

void s70r2Instantiate(s70r2Instance* instance, void* resolve(const char* module, const char* name));

void s70r2FreeInstance(s70r2Instance* instance);

#endif /* s70r2_H */

